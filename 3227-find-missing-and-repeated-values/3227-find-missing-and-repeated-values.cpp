class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        int a = 0 , b = 0 , n = grid.size();

        for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
        mp[grid[i][j]]++;

        for(int i = 1; i<=n*n; i++){
            if(mp[i] == 2){
                a = i;
            }
            if(!mp[i]){
                b = i;
            }
        }

        return {a,b};
        
    }
};