class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, maxi = 0;
        unordered_set<char> st;
        while(r < s.size()){
            while(st.find(s[r]) != st.end() && l < r){
                st.erase(s[l]);
                l++;
            }
            maxi = max(maxi, r-l+1);
            st.insert(s[r++]);
        }
        return maxi;
    }
};