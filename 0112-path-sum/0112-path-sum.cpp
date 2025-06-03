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
    void find(TreeNode* root , int targetSum , bool &ans , int sum){
        if(!root) return;

        if(!root->left && !root->right){
            sum += root->val;
            if(sum == targetSum){
                ans = true;
                return;
            }
        }

        sum += root->val;
        find(root->left , targetSum , ans , sum);
        find(root->right , targetSum , ans , sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = 0;
        int sum = 0;

        find(root , targetSum , ans , sum);

        return ans;
    }
};