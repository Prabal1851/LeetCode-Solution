class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(auto num : nums){
            mp[num]++;
        }

        vector<pair<int,int>> v;
        for(auto p : mp){
            v.push_back({p.second,p.first});
        }

        sort(v.rbegin(),v.rend());

        vector<int> ans;

        int i=0;
        while(i<k){
            ans.push_back(v[i].second);
            i++;
        }

        return ans;
    }
};