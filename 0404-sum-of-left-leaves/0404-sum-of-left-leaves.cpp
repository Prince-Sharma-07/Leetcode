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
    int count(TreeNode* root , char c , int &sum){
        if(root == NULL) return 0;

        count(root->left , 'l' , sum);
        if(!root->left && !root->right && c == 'l') sum += root->val;
        count(root->right , 'r' , sum);

        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        return count(root , 'r' , sum);
    }
};