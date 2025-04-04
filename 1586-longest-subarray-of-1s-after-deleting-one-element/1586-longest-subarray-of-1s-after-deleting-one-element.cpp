class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0 , j = 0 , zeros = 0  ,ones = 0, maxi = 0;

        while(j<nums.size()){
            if(zeros < 2){
                maxi = max(ones , maxi);
                if(nums[j] == 0) zeros++; 
                else ones++;
                j++;
            }
            else{
                 if(nums[i] == 1) ones--;
                 else zeros--;
                 i++;
            }
        }

        if(zeros)
        maxi = max(ones , maxi);
        
        return maxi;
    }
};