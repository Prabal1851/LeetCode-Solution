class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;

        int maxSum = 0;
        int sum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            while (st.find(nums[right]) != st.end()) {
                sum -= nums[left];
                st.erase(nums[left]);
                left++;
            }

            st.insert(nums[right]);
            sum += nums[right];

            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};