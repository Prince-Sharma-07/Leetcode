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
    void find(TreeNode* root , vector<long long> &sum){
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
          int size = q.size();
          long long count = 0;
          while(size--){
          TreeNode* temp = q.front();
          q.pop();
          count += temp->val;
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
          }
          sum.push_back(count);
        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        priority_queue<long long> pq;

         while(!q.empty()){
          int size = q.size();
          long long count = 0;
          while(size--){
          TreeNode* temp = q.front();
          q.pop();
          count += temp->val;
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
          }
          pq.push(count);
         }

        if(pq.size() < k) return -1;
        k--;
        while(k-- && !pq.empty()){
            pq.pop();
        }

        return pq.top();
    }
};