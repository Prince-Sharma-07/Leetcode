class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0;
        unordered_set<int> st;
        for(auto i : nums) st.insert(i);
        for(auto i : st){
            if(st.find(i-1) == st.end()){
                int no = i;
                while(st.find(no) != st.end()) no++;
                maxi = max(no-i, maxi);
            }
        }
        return maxi;
    }
};