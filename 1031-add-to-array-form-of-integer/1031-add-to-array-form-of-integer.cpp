class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
       reverse(nums.begin() , nums.end());

       for(int i = 0; i<nums.size(); i++){
         nums[i] += k;
         k = nums[i]/10;
         nums[i] %= 10;
       }

       while(k){
        nums.push_back(k%10);
        k/=10;
       }
       reverse(nums.begin() , nums.end());
       return nums;
    }
};