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
    TreeNode* create(TreeNode* root , int no){
        if(!root){
            TreeNode* temp = new TreeNode(no);
            return temp;
        }
        if(root->val > no) root->left = create(root->left , no);
        else root->right = create(root->right , no);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i = 0; i<preorder.size(); i++){
            root = create(root , preorder[i]);
        }
        return root;
    }
};