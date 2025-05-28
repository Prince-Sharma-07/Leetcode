class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0 , j = 0 , maxi = INT_MIN;

        while(j < nums.size()){
            if(nums[j] == 1){
                maxi = max(j-i+1 , maxi);
                j++;
                
            }
            else if(nums[j] == 0 && k > 0){
                maxi = max(j-i+1 , maxi);
                k--;
                j++;
            }
            else if(k == 0){
                if(nums[i] == 0){
                    i++;
                    k++;
                }
                else i++;
            }
        }
        return maxi;
    }
};