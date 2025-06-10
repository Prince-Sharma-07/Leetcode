/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void bfs(TreeNode* root , string &serialized){
        if(!root) return;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp){
                serialized.append(to_string(temp->val) + ',');
            }
            else{
                 serialized.append("null,");
                 continue;
            }

            if(temp->left) q.push(temp->left);
            else q.push(NULL);
            if(temp->right) q.push(temp->right);
            else q.push(NULL);
        }

    }

    void build(TreeNode* &root , vector<string> qdata){
        queue<TreeNode*> q;
        q.push(root);
        int i = 1;
        while(!q.empty() && i < qdata.size()){
            TreeNode* temp = q.front();
            q.pop();

            string d1 = qdata[i];
            i++;

            if(d1 != "null")
            temp->left = new TreeNode(stoi(d1));
            else temp->left = NULL;

            d1 = qdata[i];
            i++;

            if(d1 != "null")
            temp->right = new TreeNode(stoi(d1));
            else temp->right = NULL;


            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string serialized;
        bfs(root , serialized);
        return serialized;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data == "") return NULL;
        string temp;
        vector<string> qdata;
        for(int i = 0; i<data.size(); i++){
             if(data[i] == ',' ){
                qdata.push_back(temp);
                temp = "";
             }
             else{
                temp += data[i];
             }
        }

        TreeNode* root = new TreeNode(stoi(qdata[0]));
        build(root , qdata);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));