class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]) count++;
            if(count > 1) return false;
        }
        if(count == 0) return true;
        if(nums[0] < nums[nums.size()-1]) return false;
        return true;
    }
};