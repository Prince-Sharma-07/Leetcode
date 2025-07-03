class Solution {
public:
    void dfs(int node , vector<vector<int>> &adj, vector<bool> &vis , int &e, int &v){
        vis[node] = 1;
        v++;
        e += adj[node].size();
        for(auto i : adj[node]){
            if(!vis[i]){
                dfs(i , adj , vis , e, v);
            } 
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n);
        int count = 0;

        for(auto i : edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        for(int i = 0; i<n; i++){
            int e = 0 , v = 0;
            if(!vis[i]){
                dfs(i , adj , vis , e , v);
                cout<<"This is v: "<< v <<" This is e: "<<e<<endl;
                if(e == v*(v-1)) count++;
            }
        }
        return count;
    }
};