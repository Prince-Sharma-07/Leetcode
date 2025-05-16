class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long totalSum = 0, currSum = 0;

        for (auto i : grid) {
            for (auto j : i) {
                totalSum += j;
            }
        }

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                currSum += grid[i][j];
            }
            if (currSum == (totalSum-currSum)) return true;
        }

        currSum = 0;

        for (int i = 0; i < grid[0].size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                currSum += grid[j][i];
            }
            if (currSum == (totalSum-currSum)) return true;
        }

        return false;
    }
};