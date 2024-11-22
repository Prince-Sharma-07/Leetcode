class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int idx = 0;
       int maxi = INT_MIN;
       for(int i = 0; i<nums.size(); i++){
          if(nums[i] > maxi){
            maxi = nums[i];
            idx = i;
          }
       }

       for(int i = 0; i<nums.size(); i++){
        if(nums[i]*2 > maxi && i!=idx) return -1;
       }
       return idx;
    }
};