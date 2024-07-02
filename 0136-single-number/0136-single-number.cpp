class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int Xor = 0;
       for(int i = 0; i<nums.size(); i++){
         Xor ^= nums[i];
       }
       return Xor;
    }
};