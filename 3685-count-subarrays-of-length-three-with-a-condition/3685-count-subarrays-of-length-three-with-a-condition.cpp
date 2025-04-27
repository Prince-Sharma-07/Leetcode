class Solution {
public:
    int countSubarrays(vector<int>& nums) {
         int j = 2 , count = 0;
         while(j<nums.size()){
            if((nums[j] + nums[j-2])*2 == nums[j-1] ) count++;
            j++;
         }
         return count;
    }
};