/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
TreeNode* insertNode(TreeNode* root , int val){
    TreeNode* temp = root;
    if(temp == nullptr){
        return new TreeNode(val);
    }
    if(temp->val < val){
        temp->right = insertNode(temp->right,val);
    }
    else{
        temp->left = insertNode(temp->left,val);
    }
    return root;
}

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         return insertNode(root,val);
    }
};