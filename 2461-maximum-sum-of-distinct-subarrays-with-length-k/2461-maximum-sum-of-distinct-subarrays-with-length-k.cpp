class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0, j = 0;
        long long maxi = 0, sum = 0;
        unordered_set<int> st;
        while(j < nums.size()){
            while(st.find(nums[j]) != st.end() && i < j){
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            sum += nums[j];
            st.insert(nums[j]);
            j++;
            if(j-i == k){
                if(st.size() == k)
                maxi = max(maxi, sum);

                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            } 
        }
        return maxi;
    }
};