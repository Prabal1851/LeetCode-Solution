class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mini = INT_MAX;
        int maxi = INT_MIN;

        int min_index = 0;
        int max_index = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                min_index = i;
            }

            if (nums[i] > maxi) {
                maxi = nums[i];
                max_index = i;
            }
        }

        int left = max(min_index, max_index) + 1;

        int right = n - min(min_index, max_index);

        int both = min_index + 1 + (n - max_index);
        
        // Also handle max from left, min from right
        int both2 = max_index + 1 + (n - min_index);

        return min({left, right, both, both2});
    }
};