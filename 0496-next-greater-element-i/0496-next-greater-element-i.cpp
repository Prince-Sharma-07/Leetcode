class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        stack<int> st;
        vector<int> ngr, ans;
        for(int i = m-1; i>=0; i--){
            while(!st.empty() && st.top() < nums2[i]) st.pop();
            if(st.empty()) ngr.push_back(-1);
            else ngr.push_back(st.top());
            st.push(nums2[i]);
        }
        reverse(ngr.begin(),ngr.end());
        unordered_map<int , int> mp;
        for(int i = 0; i<m; i++) mp[nums2[i]] = i;
        for(auto i : nums1) ans.push_back(ngr[mp[i]]);
        return ans;
    }
};