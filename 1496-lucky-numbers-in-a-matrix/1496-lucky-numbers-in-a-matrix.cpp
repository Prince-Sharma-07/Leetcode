class Solution {
public:
    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_map<int , int> mp;
        for(int i = 0; i<m; i++){
            int mini = INT_MAX;
            for(int j = 0; j<n; j++){
                mini = min(mini , matrix[i][j]); 
            }
             mp[mini]++;
        }
        for(int j = 0; j<n; j++){
            int maxi = INT_MIN;
            for(int i = 0; i<m; i++){
                maxi = max(maxi , matrix[i][j]); 
            }
            mp[maxi]++;
        }
        for(auto i : mp) {
            if(i.second == 2) ans.push_back(i.first);
        }
        return ans;
    }
};