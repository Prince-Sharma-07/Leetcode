class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> temp;

        for(int i  = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[i].size(); j++){
                temp.push_back(grid[i][j]);
            }
        }
        
        sort(temp.begin() , temp.end());
        int n = temp.size();
        int target = temp[n/2] , ans = 0;
       

       for(int &i : temp){
         if(i%x != target%x) return -1;
         ans += abs(target-i)/x;
       }

        return ans;
    }
};