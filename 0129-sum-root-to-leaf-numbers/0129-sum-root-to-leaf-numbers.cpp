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
    void dfs(TreeNode* root , vector<string> &nums , string t){
        if(!root) return;
        t += (root->val) + '0';
        if(!root->left && !root->right){
            nums.push_back(t);
        }
        dfs(root->left , nums , t);
        dfs(root->right, nums , t);
    }
    int sumNumbers(TreeNode* root) {
        vector<string> nums;
        int sum = 0;
        dfs(root , nums, "");
        for(auto i : nums){
            sum += stoi(i);
        }
        return sum;
    }
};