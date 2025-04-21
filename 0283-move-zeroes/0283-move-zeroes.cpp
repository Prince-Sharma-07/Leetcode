class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i  = 0 , j = 0;
        while(j < nums.size() && nums[j] == 0) j++;

        if(j == nums.size()) return;

        while(j < nums.size()){
            if(nums[j] != 0) swap(nums[i++] , nums[j++]);
            else j++;
        }

    }
};