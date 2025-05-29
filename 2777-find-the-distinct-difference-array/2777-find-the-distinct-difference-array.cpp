class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        set<int> st;
        vector<int> prefix, suffix, ans;

        for (auto i : nums) {
            st.insert(i);
            prefix.push_back(st.size());
        }

        for (auto i : prefix) {
            cout << i << " ";
        }

        st = {};

        for (int i = nums.size() - 1; i >= 0; i--) {
            suffix.push_back(st.size());
            st.insert(nums[i]);
        }
        reverse(suffix.begin(), suffix.end());
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(prefix[i] - suffix[i]);
        }

        return ans;
    }
};