class Solution {
public:
    void sortColors(vector<int>& nums) {
       int first = 0 , last = nums.size()-1;

       for(int i = 0; i<=last; i++){
         if(nums[i] == 0) swap(nums[first++] , nums[i]);
         else if(nums[i] == 2) swap(nums[last--] , nums[i--]);
       }
        
    }
};