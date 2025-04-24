class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st;
        int count = 0;
        for(auto i : nums){
            st.insert(i);
        }
        for(int i = 0; i<nums.size(); i++){
            unordered_set<int> st2;
            for(int j = i; j<nums.size(); j++){
                st2.insert(nums[j]);
                if(st.size() == st2.size()) count++;
            }
        }
        return count;
    }
};