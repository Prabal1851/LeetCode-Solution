class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp;

        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        for (char ch : s) {
            if (mp.count(ch)) {          // Closing bracket
                if (st.empty() || st.top() != mp[ch])
                    return false;
                st.pop();
            }
            else {                       // Opening bracket
                st.push(ch);
            }
        }

        return st.empty();
    }
};