class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string  , int> mp;
        int count = 0 , n = grid.size();

        for(auto vec : grid){
            string s;
            for(auto i : vec){
                s += to_string(i);
                s += ' ';
            }
            mp[s]++;
        }

        for(int i = 0; i<n; i++){
            string s;
            for(int j = 0; j<n; j++){
                s += to_string(grid[j][i]);
                s += ' ';
            }
            if(mp[s]) count += mp[s];
        }

        return count;
    }
};