class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
            };

        int num =0;  

        for(int r=1;r<=s.size();r++){
            int num1 = mp[s[r-1]];
            int num2 = mp[s[r]];

            if(num1 >= num2){
                num += num1;
            }
            else{
                
                num -= num1 ;
            }
        }
        return num;
    }
};