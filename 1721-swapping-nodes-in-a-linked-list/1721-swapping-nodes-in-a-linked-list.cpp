/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
      
    ListNode *slow = head;
    ListNode *fast = head;

    int pos = k+1;

    for(int i=1;i<pos;i++){
        fast = fast->next;
    }

    while(fast != nullptr){
        slow = slow->next;
        fast = fast->next;
    }

    fast = head;

    for(int i=1;i<k;i++){
        fast = fast->next;
    }

    int temp = fast->val;
    fast->val = slow->val;
    slow->val = temp;

    return head;
    }
};