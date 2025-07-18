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
    void dfs(TreeNode* root, int prev , int &count){
        if(!root) return;
        if(root->val >= prev){
            count++;
            dfs(root->left , root->val, count);
            dfs(root->right , root->val, count);
        } 
        else{
            dfs(root->left , prev, count);
            dfs(root->right , prev, count);
        }
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        dfs(root , INT_MIN , count);
        return count;
    }
};