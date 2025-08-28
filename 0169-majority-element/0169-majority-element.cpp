class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 , candidate = nums[0] , j = 1;
        while(j < nums.size()){
            if(nums[j] == candidate) count++;
            else if(count == 0) candidate = nums[j];
            else count--;
            j++;
        }
        return candidate;
    }
};