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

    int noOfSwaps(vector<int> arr){
        int swaps = 0;

        vector<int> temp = arr;
        sort(temp.begin() , temp.end());

        unordered_map<int , int> mp;

        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]] = i;
        }

        for(int i = 0; i<arr.size(); i++){
            if(temp[i] == arr[i]) continue;

            int curridx = mp[temp[i]];
            mp[arr[i]] = curridx;

            swap(arr[curridx] , arr[i]);
            swaps++;
        }

        return swaps;
    }

    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int swaps = 0;

        while(!q.empty()){

            int n = q.size();
            vector<int> arr;

            while(n--){
            TreeNode* temp = q.front();
            q.pop();
            arr.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            }

           swaps += noOfSwaps(arr);

        }

        return swaps;
    }
};