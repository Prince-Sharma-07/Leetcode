class Solution {
public:
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
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto j : adj[node]){
                if(!vis[j] && !mp[j]){
                    q.push(j);
                    vis[j] = true;
                }
            }
        }
        for(auto i : vis){
            if(i) count++;
        }
        return count;
    }
};