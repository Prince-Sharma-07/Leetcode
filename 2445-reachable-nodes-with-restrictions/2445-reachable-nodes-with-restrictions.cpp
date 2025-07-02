class Solution {
public:
    void dfs(int node , vector<vector<int>> &adj, vector<bool> &vis, unordered_map<int , bool> &mp){
        vis[node] = 1;
        for(auto i : adj[node]){
            if(!vis[i] && !mp[i]) dfs(i , adj , vis , mp);
        }
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        unordered_map<int , bool> mp;
        for(auto i : restricted){
            mp[i] = true;
        }
        vector<vector<int>> adj(n);
        int count = 0;
        vector<bool> vis(n);
        for(auto i : edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        dfs(0 , adj , vis , mp);

        for(auto i : vis){
            if(i) count++;
        }
        return count;
    }
};