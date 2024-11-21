class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long ans = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] ==  0) return 0;
            nums[i] = nums[i]/abs(nums[i]);
        }
        for(int i = 0; i<nums.size(); i++){
            ans *= nums[i];
        }
        if(ans == 0) return 0;
        if(ans < 0) return -1;
        return 1;
    }
};