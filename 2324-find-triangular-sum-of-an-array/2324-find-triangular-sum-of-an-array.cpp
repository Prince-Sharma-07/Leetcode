class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<nums.size()-1; j++){
                nums[j] = (nums[j] + nums[j+1])%10;
            }
            nums.pop_back();
        }

        return nums[0];
    }
};