class Solution {
public:
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};

    bool check(int x , int y, int n, int m){
        return x>=0 && y>=0 && x < n && y < m;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size() , m = mat[0].size();
        vector<vector<int>> dist(n , vector<int>(m));
        vector<vector<bool>> vis(n , vector<bool>(m));
        queue<pair<int , int>> q;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(mat[i][j] == 0){
                    vis[i][j] = 1;
                    dist[i][j] = 0;
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i = 0; i<4; i++){

                int cx = x + dx[i];
                int cy = y + dy[i];
                if(check(cx , cy , n , m) && !vis[cx][cy]){
                    dist[cx][cy] = dist[x][y] + 1;
                    vis[cx][cy] = 1;
                    q.push({cx , cy});
                }
            }
        }

        return dist;
    }
};