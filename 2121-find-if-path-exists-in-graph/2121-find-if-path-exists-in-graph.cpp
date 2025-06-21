class Solution {
public:
    void dfs(int node , vector<vector<int>> &adj, vector<bool> &vis){
        vis[node] = 1;
        for(auto i : adj[node]){
            if(!vis[i]) dfs(i , adj , vis);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(source , adj , vis);
        return vis[destination];
    }
};