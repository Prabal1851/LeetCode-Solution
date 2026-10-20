class Solution {
public:
    int longestContinuousSubstring(string s) {
        int left = 0;
        int right = 1;
        int maxLength = 1;

        while(right < s.size()){
            if(s[right] - s[right-1] != 1){
              left = right;
              
                
            }
            maxLength = max(maxLength, right-left+1);
            right++;
            
        }
        return maxLength;
    }
};