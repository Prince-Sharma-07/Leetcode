class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        for(int i = 0; i<nums.size(); i++){
            for(int x = 0; x<=nums[i]; x++){
              if((x | (x+1)) == nums[i]){
               ans[i] = x;
               break;
              } 
         }
        }
        return ans;
    }
};