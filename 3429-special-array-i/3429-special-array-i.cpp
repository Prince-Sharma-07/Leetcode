class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        if(n == 1) return true;
        for(int i = 0 ; i<n-1; i++){
            if(nums[i]%2 == 0 && nums[i+1]%2 != 0 || nums[i+1]%2 == 0 && nums[i]%2 != 0) flag = true;
            else return false;
        }
        return flag;
    }
};