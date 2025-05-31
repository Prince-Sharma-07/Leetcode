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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr)
      return 0;

    int ans = 0;

    // If the left child exists
    if (root->left) {
      // Check if the left child is a leaf (no left or right child)
      if (root->left->left == nullptr && root->left->right == nullptr)
        ans += root->left->val;  // Add its value to the answer
      else
        ans += sumOfLeftLeaves(root->left);  // Otherwise, check recursively in the left subtree
    }

    // Always check the right subtree recursively
    ans += sumOfLeftLeaves(root->right);

    return ans;  

    }
};