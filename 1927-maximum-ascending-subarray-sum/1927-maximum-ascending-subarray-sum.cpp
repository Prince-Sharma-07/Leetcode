class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi = nums[0] , sum = maxi;

        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] < nums[i]){
                sum += nums[i];
                maxi = max(sum , maxi);
            }
            else{
                sum = nums[i];
            }
        }
        return maxi;
    }
};