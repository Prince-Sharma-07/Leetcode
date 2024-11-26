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
    int find(vector<int> in , int target , int start , int end){
        for(int i = start; i<=end; i++){
            if(in[i] == target) return i;
        }
        return -1;
    }
    TreeNode* Tree(vector<int> in ,vector<int> pre , int InStart , int InEnd , int index){
        if(InStart > InEnd){
            return NULL;
        }
        TreeNode *root = new TreeNode(pre[index]);
        int pos = find(in , pre[index] , InStart , InEnd);
        
        root->left = Tree(in , pre , InStart , pos-1 , index+1);
        root->right = Tree(in ,pre , pos+1 , InEnd , index+(pos-InStart)+1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        return Tree(in , pre, 0 , n-1 , 0);
    }
};