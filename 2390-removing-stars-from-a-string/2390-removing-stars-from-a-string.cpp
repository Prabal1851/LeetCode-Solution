class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(char ch : s){

            if(!st.empty() && st.top() != '*' && ch == '*'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }

        string s1 = "";
        while(!st.empty()){
            s1 += st.top();
            st.pop();
        }

        reverse(s1.begin(),s1.end());
        return s1;
    }
};