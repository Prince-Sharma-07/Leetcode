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
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(root == NULL)
            return root;

        queue<TreeNode*> que;
        que.push(root);
        vector<int> levelSum;

        //Step-1 (find sum of each level and store in levelSum array)
        while(!que.empty()) {
            int currLevelSum = 0;
            int n = que.size();
            while(n--) {
                TreeNode* curr = que.front();
                que.pop();
                currLevelSum += curr->val;
                if(curr->left) {
                    que.push(curr->left);
                }
                if(curr->right) {
                    que.push(curr->right);
                }
            }

            levelSum.push_back(currLevelSum);
        }
        cout << levelSum.size() << endl;

        //Step-2 (update each node value with cousin sum)
        que.push(root);
        root->val = 0; //root has not cousins
        int i = 1;
        while(!que.empty()) {
            int n = que.size(); //current level me kitne nodes hain

            while(n--) {
                TreeNode* curr = que.front();
                que.pop();

                //levelSum of currentLevel - sibilnigSum
                int siblingSum = curr->left != NULL ? curr->left->val : 0;
                siblingSum += curr->right != NULL ? curr->right->val : 0;

                if(curr->left) {
                    curr->left->val = levelSum[i] - siblingSum;
                    que.push(curr->left);
                }
                if(curr->right) {
                    curr->right->val = levelSum[i] - siblingSum;
                    que.push(curr->right);
                }
            }
            i++;
        }

        return root;

    }
};;