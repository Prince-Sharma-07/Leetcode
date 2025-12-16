class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1, k = nums.size() - 1;
            int t = 0-nums[i];
            while (j < k) {
                if (nums[j] + nums[k] == t)
                    st.insert({nums[i], nums[j], nums[k]});
                if (nums[j] + nums[k] < t)
                    j++;
                else
                    k--;
            }
        }
        for (auto it : st)
            ans.push_back(it);
        return ans;
    }
};