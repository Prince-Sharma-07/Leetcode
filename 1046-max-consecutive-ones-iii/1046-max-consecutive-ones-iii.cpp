class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int i = 0 , j = 0 , zeros = 0 , maxLen = 0;

        while(j<nums.size()){
            if(nums[j] == 0){
                zeros++;
            }
            if(zeros <= k){
                maxLen = max(maxLen , j-i+1);
            }
            else{
                while(nums[i] != 0){
                    i++;
                }
                zeros--;
                i++;
            }
            j++;
        }

        return maxLen;
    }
};