class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0;
        unordered_set<int> st;
        for(auto i : nums) st.insert(i);
        for(auto i : nums){
            int no = i;
            if(st.find(no-1) == st.end()){
                while(st.find(no+1) != st.end()) no++;
                maxi = max(no-i+1, maxi);
            }
        }
        return maxi;
    }
};