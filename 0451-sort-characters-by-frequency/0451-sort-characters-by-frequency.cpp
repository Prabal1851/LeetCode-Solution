class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;

        for(auto ch : s){
            mp[ch]++;
        }

        vector<pair<int,char>> v;

        for(auto p : mp){
            v.push_back({p.second,p.first});
        }

        sort(v.rbegin(),v.rend());

        string s1 = "";
        for(auto ch : v){
            s1 += string(ch.first,ch.second);
        }

        return s1;
    }
};