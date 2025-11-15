class Solution {
public:
    int helper(vector<int>& temp) {
        int mini = INT_MAX;
        for (int i = 0; i < temp.size() - 2; i++) {
            int j = i + 1, k = i + 2;
            mini = min(mini, abs(temp[i] - temp[j]) + abs(temp[j] - temp[k]) + abs(temp[k] - temp[i]));
        }
        return mini;
    }

    int minimumDistance(vector<int>& nums) {
        int n = nums.size(), minDist = INT_MAX;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto i : mp) {
            if (i.second.size() >= 3) {
                minDist = min(minDist, helper(i.second));
            }
        }
        return minDist == INT_MAX ? -1 : minDist;
    }
};