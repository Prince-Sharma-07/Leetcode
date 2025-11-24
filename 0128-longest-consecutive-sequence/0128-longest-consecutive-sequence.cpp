class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int maxi = 0;
        unordered_set<int> st;
        for(auto i : nums){
            st.insert(i);
        }
        for(auto i : st){
            if(st.find(i-1) == st.end()){
                int cnt = 0;
                int no = i;
                while(st.find(no) != st.end()){
                    no++;
                    cnt++;
                }
                maxi = max(cnt , maxi);
            }
        }
        return maxi;
    }
};