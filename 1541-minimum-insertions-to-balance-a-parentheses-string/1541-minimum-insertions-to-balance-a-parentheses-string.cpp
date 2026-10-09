class Solution {
public:
    int minInsertions(string s) {
        int insertions = 0;
        int need = 0;

        for (char ch : s) {
            if (ch == '(') {
                // If need is odd, insert one ')' first
                if (need % 2 == 1) {
                    insertions++;
                    need--;
                }

                // Every '(' requires two ')'
                need += 2;
            } 
            else {
                need--;

                // No opening parenthesis available
                if (need < 0) {
                    insertions++;
                    need = 1;
                }
            }
        }

        return insertions + need;
    }
};