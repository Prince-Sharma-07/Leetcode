class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i = 0, j = nums.size()-1, maxi = INT_MIN;
        while(i < j){
            if(nums[i] < nums[j]){
                maxi = max(nums[i] * (j-i), maxi);
                i++;
            }
            else if(nums[i] > nums[j]){
                maxi = max(nums[j] * (j-i), maxi);
                j--;
            }
            else {
                maxi = max(nums[i]*(j-i), maxi);
                i++;
                j--;
            }
        }
        return maxi;
    }
};