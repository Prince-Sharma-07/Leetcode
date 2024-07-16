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
   bool findPath(TreeNode* lca , int target , string &path){
        if(lca == NULL){
            return false;
        }
        if(lca->val == target){
            return true;
        }

        path += 'L';
        if(findPath(lca->left , target , path) == true){
            return true;
        }
        path.pop_back();

        path += 'R';
        if(findPath(lca->right , target , path) == true){
            return true;
        }
        path.pop_back();

        return false;
    }
    TreeNode* LCA(TreeNode* root , int src , int des){
          if(!root)  return NULL;
          if(root->val == src || root->val == des) return root;

          TreeNode* leftN = LCA(root->left , src , des);
          TreeNode* rightN = LCA(root->right , src , des);

          if(leftN && rightN) return root;
          return leftN ? leftN : rightN;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* lca = LCA(root , startValue, destValue);
        string lcaToSrc = "" , lcaToDest = "";

        findPath(lca , startValue , lcaToSrc);
        findPath(lca , destValue , lcaToDest);

        string result = "";
        
        for(int i = 0; i<lcaToSrc.size(); i++){
            result += 'U';
        }

        result += lcaToDest;

        return result;
    }
};