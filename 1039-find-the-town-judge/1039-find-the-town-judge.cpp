class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        vector<vector<int>> adj(n+1);
        for(auto i : trust){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }

        int ans = -1;
        unordered_map<int , int> mp;

        for(int i = 1; i<=n; i++){
            if(adj[i].size() == 0) ans = i;
            for(auto j : adj[i]){
                mp[j]++;
            }
        }

        if(ans > 0 && mp[ans] == n-1) return ans;
        return -1;
    }
};