class Solution {
public:
    int dx[4] = {0 , 0, -1, 1};
    int dy[4] = {1 , -1 , 0, 0};
    bool check(int cx , int cy , int n , int m){
        return cx >= 0 && cy >= 0 && cx < n && cy < m;
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m));
        queue<pair<int, int>> q;
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    q.push({i, j});
                    vis[i][j] = 1;
                    count++;

                    while (!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();

                        for (int i = 0; i < 4; i++) {
                            int cx = dx[i] + x;
                            int cy = dy[i] + y;
                            if (check(cx, cy, n, m) && !vis[cx][cy] && grid[cx][cy] == '1') {
                                q.push({cx, cy});
                                vis[cx][cy] = 1;
                            }
                        }
                    }
                }
            }
        }

        return count;
    }
};