class Solution {
public:
    int dx[4] = {0 ,0 , -1 , 1};
    int dy[4] = {1, -1 , 0 , 0};

    bool check(int x , int y, int n , int m){
        return x>=0 && y>=0 && x < n && y < m;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size() , fresh = 0 , time = 0;
        vector<vector<bool>> vis(n , vector<bool>(m));
        queue<pair<int , int>> q;

        for(int i = 0; i<n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1) fresh++;
                if(grid[i][j] == 2){
                    q.push({i , j});
                    vis[i][j] = 1;
                } 
            }
        }

        while(!q.empty()){
            int size = q.size();
            bool flag = 0;
            while(size--){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i = 0; i<4; i++){
                int cx = dx[i] + x;
                int cy = dy[i] + y;
                if(check(cx , cy , n , m) && !vis[cx][cy] && grid[cx][cy] == 1){
                    grid[cx][cy] = 2;
                    vis[cx][cy] = 1;
                    fresh--;
                    q.push({cx , cy});
                    flag = 1;
                }
              }
            }
            if(flag)
            time++;
        }

        return fresh == 0 ? time : -1;
    }
};