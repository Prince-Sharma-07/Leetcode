class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumR = 0 , sumL = 0;
        for(auto i : nums) sumR += i;
        if(nums.size() == 1) return 0; 
        for(int i = 0; i<nums.size(); i++){
            sumL += nums[i];
            if(sumR == sumL) return i;
            sumR -= nums[i];
        }
        return -1;
    }
};