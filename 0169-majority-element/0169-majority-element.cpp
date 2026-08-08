class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        int ans = -1;
        int max = 0;

        for(auto it : mp){
            if(it.second > max){
                ans = it.first;
                max = it.second;
            }
        }
        return ans;
    }
};