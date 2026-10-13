bool isValid(vector<int>& arr) {
    for (int i = 2; i < arr.size(); i++) {
        if ((arr[i-1] - arr[i-2]) != (arr[i] - arr[i-1])) {
            return false;
        }
    }

    return true;
}


class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,pair<int,vector<int>>> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]].first++;
            mp[nums[i]].second.push_back(i);
        }

        int count=0;

        for(auto it : mp){
            if(it.second.first >= 3){
                if(isValid(it.second.second)){
                    count++;
                }
            }
        }

        return count;
    }
};