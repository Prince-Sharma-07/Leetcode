class Solution {
public:
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    bool check(int x , int y , int n , int m){
        return x >= 0 && y >= 0 && x < n && y < m;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size() , count = 0;
        vector<vector<bool>> vis(n , vector<bool>(m));
        queue<pair<int,int>> q;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if((i == 0 || j == 0 || i == n-1 || j == m-1) && grid[i][j] == 1 && !vis[i][j]){
                    q.push({i,j});
                    vis[i][j] = 1;
                }
                else if(grid[i][j] == 1){
                    count++;
                }
            }
        }

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i = 0; i<4; i++){
                int cx = dx[i] + x;
                int cy = dy[i] + y;
                if(check(cx , cy , n , m) && grid[cx][cy] && !vis[cx][cy]){
                    count--;
                    vis[cx][cy] = 1;
                    q.push({cx,cy});
                }
            }
        }
        return count;
    }
};