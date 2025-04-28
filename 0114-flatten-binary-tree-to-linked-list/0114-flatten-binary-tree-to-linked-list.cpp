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

    void Preorder(TreeNode* root , vector<int> &pre){
            if(!root) return;

            pre.push_back(root->val);
            Preorder(root->left , pre);
            Preorder(root->right , pre);

    }

    void flatten(TreeNode* root) {
        if(!root) return;
        vector<int> pre;
        Preorder(root , pre);

        TreeNode* leftNode = root->left;
        TreeNode* RightNode = root->right;

        root->left = NULL;
        root->right = NULL;

        TreeNode* temp = root;
        temp->val = pre[0];

        for(int i = 1; i<pre.size(); i++){
            temp->right = new TreeNode(pre[i]);
            temp = temp->right;
        }

        temp->right = NULL;

    }
};