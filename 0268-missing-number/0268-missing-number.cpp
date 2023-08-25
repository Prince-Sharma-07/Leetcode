class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       int sumarr=0;
        for(int i=0; i<n; i++){
            sumarr+=nums[i];
        }
        int unique = (n*(n+1))/2 - sumarr;
        return unique;
        
    }
};