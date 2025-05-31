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

        count(root->left , 'l' , sum);  //send a char = 'l' that describes this leaf node is left;
        if(!root->left && !root->right && c == 'l') sum += root->val;  //if the leaf node is left then add it to the sum
        count(root->right , 'r' , sum); //send a char = 'r' that describes this leaf node is left;

        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        return count(root , 'r' , sum);
    }
};