class Solution {
public:
long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
long long k = (long long)k1 + k2;
vector<int> diff(nums1.size());


    long long total = 0;
    int maxi = 0;

    for (int i = 0; i < nums1.size(); i++) {
        diff[i] = abs(nums1[i] - nums2[i]);
        total += diff[i];
        maxi = max(maxi, diff[i]);
    }

    if (k >= total) return 0;

    int low = 0, high = maxi;

    while (low < high) {
        int mid = low + (high - low) / 2;
        long long operations = 0;

        for (int d : diff) {
            if (d > mid) {
                operations += d - mid;
            }
        }

        if (operations <= k)
            high = mid;
        else
            low = mid + 1;
    }

    int limit = low;
    long long sum = 0;

    for (int d : diff) {
        if (d > limit) {
            k -= d - limit;
            d = limit;
        }
        sum += 1LL * d * d;
    }


    sum -= k * (2LL * limit - 1);

    return sum;
}


};
