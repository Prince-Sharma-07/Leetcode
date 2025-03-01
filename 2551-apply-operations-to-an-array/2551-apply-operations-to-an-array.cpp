class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] == nums[i + 1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int j = nums.size()-1;
        while(nums[j] == 0) j--;
        int i = j-1;

        while(i >= 0){
            if(nums[i] == 0){
                swap(nums[i] , nums[j]);
                i--;
                j--;
            }
            else i--;
        }
        return nums;
    }
};