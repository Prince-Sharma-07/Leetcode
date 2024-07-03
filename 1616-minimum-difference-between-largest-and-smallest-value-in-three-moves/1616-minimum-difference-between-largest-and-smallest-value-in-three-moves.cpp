class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4){
            return 0;
        }
            sort(nums.begin(),nums.end());
           int minDiff = INT_MAX;
           for(int l = 0, r = nums.size()-4; l<4 ; l++, r++){
              minDiff = min(minDiff , nums[r] - nums[l]);
           }
           return minDiff;
    }
};