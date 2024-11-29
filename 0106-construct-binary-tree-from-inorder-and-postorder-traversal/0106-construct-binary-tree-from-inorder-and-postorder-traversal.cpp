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
int find(vector<int> in , int start , int end , int num){
        for(int i = start; i<=end; i++){
            if(in[i] == num)  return i;
        }
        return -1;
    }
    TreeNode* Tree(vector<int> post , vector<int> in, int start , int end , int index){
        if(start > end) return NULL;

        TreeNode* root = new TreeNode(post[index]);
        int pos = find(in , start , end , post[index]);
        
        root->right = Tree(post , in , pos+1 , end , index-1);
        root->left = Tree(post , in , start , pos-1 , index-(end-pos)-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return Tree(postorder , inorder , 0 , n-1 , n-1);
    }
};