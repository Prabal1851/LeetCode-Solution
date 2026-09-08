class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {

        vector<int> nums;

        // Convert linked list to vector
        while (head != nullptr) {
            nums.push_back(head->val);
            head = head->next;
        }

        vector<int> ans(nums.size(), 0);
        stack<int> st;

        // Traverse from right to left
        for (int i = nums.size() - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }

            if (!st.empty()) {
                ans[i] = st.top();
            }

            st.push(nums[i]);
        }

        return ans;
    }
};