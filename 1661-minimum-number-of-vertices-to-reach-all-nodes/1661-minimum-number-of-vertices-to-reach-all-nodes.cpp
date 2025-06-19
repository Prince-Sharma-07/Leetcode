class Solution {
public:
    // void dfs(int node , vector<vector<int>> &edges, vector<int> &vis){
        
    //     for(auto i : edges[node]){
    //         vis[node]++;
    //         if(!vis[i]) dfs(i , edges , vis);
    //     }
    // }

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        vector<bool> vis(n);
        vector<vector<int>> adj(n);

        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }

        for(auto i : adj){
            for(auto j : i){
                vis[j] = 1;
            }
        }

        for(int i = 0; i<n; i++) if(!vis[i]) ans.push_back(i);
        return ans;
    }
};