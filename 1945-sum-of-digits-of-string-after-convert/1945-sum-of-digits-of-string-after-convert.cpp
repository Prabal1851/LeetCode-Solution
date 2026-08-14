class Solution {
public:
    int getLucky(string s, int k) {
        
        string s1 = "";
        for(char ch : s){
            s1 += to_string(ch - 'a' + 1);
        }
        string ans = s1;
        int i=0;
        while(i<k){
            int sum = 0;
            for(char c : ans){
                sum += c - '0';
            }
            ans = to_string(sum);
            i++;

        }
        return stoi(ans);
    }
};