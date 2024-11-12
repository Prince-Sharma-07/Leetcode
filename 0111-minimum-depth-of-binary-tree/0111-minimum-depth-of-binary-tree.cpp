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
    void traverse(TreeNode* root , int &mini , int curr){
        if(!root) return;
        curr++;
        if(!root->left && !root->right){
          mini = min(curr , mini);
        }
        traverse(root->left , mini , curr);
        traverse(root->right , mini , curr);
        return;
    }

    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int mini = INT_MAX;
        traverse(root , mini , 0);
        return mini;
    }
};