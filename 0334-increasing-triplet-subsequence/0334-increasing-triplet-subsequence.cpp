class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX , second = INT_MAX;

        for(int i = 0 ; i<nums.size(); i++){
            if(first >= nums[i]) first = nums[i];
            else if(second >= nums[i]) second = nums[i];
            else return 1;
        }

        return 0;
    }
};