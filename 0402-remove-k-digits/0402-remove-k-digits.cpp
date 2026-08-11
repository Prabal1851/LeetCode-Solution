class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(char ch : num) {

            while(k > 0 && !st.empty() && st.top() > ch) {
                st.pop();
                k--;
            }

            st.push(ch);
        }

        // If k is still left, remove from the end
        while(k > 0) {
            st.pop();
            k--;
        }

        // Convert stack to string
        string sb;

        while(!st.empty()) {
            sb.push_back(st.top());
            st.pop();
        }

        reverse(sb.begin(), sb.end());

        // Remove leading zeros
        int start = 0;
        while(start < sb.size() && sb[start] == '0') {
            start++;
        }

        string ans = sb.substr(start);

        return ans.empty() ? "0" : ans;
    }
};