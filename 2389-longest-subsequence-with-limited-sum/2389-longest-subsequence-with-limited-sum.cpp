class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

        vector<int> prefix(nums.size());

        prefix[0] = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        vector<int> ans;

        for(int q : queries) {
            int low = 0;
            int high = prefix.size() - 1;
            int result = 0;

            while(low <= high) {
                int mid = low + (high - low) / 2;

                if(prefix[mid] <= q) {
                    result = mid + 1;
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }

            ans.push_back(result);
        }

        return ans;
    }
};