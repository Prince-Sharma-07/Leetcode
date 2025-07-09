class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }

        vector<vector<int>> ans;

        while (!mp.empty()) {
            vector<int> temp;
            vector<int> toErase;

            for (auto& i : mp) {
                temp.push_back(i.first);
                i.second--;
                if (i.second == 0) {
                    toErase.push_back(i.first);
                }
            }

            for (int key : toErase) {
                mp.erase(key);
            }

            ans.push_back(temp);
        }
        
        return ans;
    }
};