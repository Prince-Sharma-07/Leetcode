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
    void find(TreeNode* root , int &prev ,int &ans){
      if(!root) return;

      find(root->left , prev , ans);
      if(prev != -1)
      ans = min(ans , root->val - prev);
      prev = root->val;
      find(root->right , prev , ans);

    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prev = -1;
        find(root , prev , ans);
        return ans;
    }
};