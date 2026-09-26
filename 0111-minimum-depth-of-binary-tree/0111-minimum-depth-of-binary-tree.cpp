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

 int height(TreeNode* root){
    if(root == nullptr){
        return 0;
    }

    if(root->left == nullptr){
        return 1 + height(root->right);
    }
    if(root->right == nullptr){
        return 1 + height(root->left);
    }

    return 1 + min(height(root->left),height(root->right));
 }
class Solution {
public:
    int minDepth(TreeNode* root) {
        return height(root);
    }
};