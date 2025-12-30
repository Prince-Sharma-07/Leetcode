class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;
        int i = 0, j = 0;
        while (k--) {
            mp[nums[j]]++;
            j++;
        }
        while (j < nums.size()) {
            auto max_ele = mp.rbegin();
            ans.push_back(max_ele->first);
            if (mp[nums[i]] == 1)
                mp.erase(nums[i]);
            else
                mp[nums[i]]--;
            i++;
            mp[nums[j]]++;
            j++;
        }
        auto max_ele = mp.rbegin();
        ans.push_back(max_ele->first);
        return ans;
    }
};