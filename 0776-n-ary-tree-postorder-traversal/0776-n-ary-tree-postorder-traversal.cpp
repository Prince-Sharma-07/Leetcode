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
    void find(Node* root , vector<int> &ans){
        if(!root) return;
        for(Node* childNode : root->children){
            find(childNode , ans);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
       if(!root) return {};
       vector<int> ans;
       find(root ,ans);
       return ans;
    }
};