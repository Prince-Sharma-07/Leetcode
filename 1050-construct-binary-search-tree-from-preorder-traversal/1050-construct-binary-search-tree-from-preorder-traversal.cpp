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
    TreeNode* create(vector<int> &preorder , int lower , int upper , int &idx){
        if(idx == preorder.size() || lower > preorder[idx] || upper < preorder[idx]){
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[idx++]);

        root->left = create(preorder , lower , root->val , idx);
        root->right = create(preorder , root->val ,upper , idx);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        return create(preorder , INT_MIN , INT_MAX , idx);
    }
};