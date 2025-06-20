/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);

        vector<vector<int>> ans;

        while(!q.empty()){
            int n = q.size();
            vector<int> arr;
            while(n--){
                Node* temp = q.front();
                arr.push_back(temp->val);
                q.pop();
                for(auto child : temp->children){
                    q.push(child);
                }
            }
            ans.push_back(arr);
        }

        return ans;
    }
};