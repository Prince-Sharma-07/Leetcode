class Solution {
public:
    void dfs(int node , vector<vector<int>> &rooms, vector<bool> &vis){
        vis[node] = 1;
        for(auto i : rooms[node]){
            if(!vis[i]) dfs(i , rooms, vis); 
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> vis(rooms.size());
        dfs(0 , rooms, vis);
        for(auto i : vis) if(!i) return 0;
        return 1;
    }
};