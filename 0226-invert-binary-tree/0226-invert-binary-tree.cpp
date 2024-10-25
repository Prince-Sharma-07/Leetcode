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
class Solution {
public:
    TreeNode* find(TreeNode* root){
        if(!root) return NULL;
        TreeNode* temp = new TreeNode(root->val);

        temp->left = find(root->right);
        temp->right = find(root->left);

        return temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* ans = NULL;
        ans = find(root);
        return ans;
    }
};