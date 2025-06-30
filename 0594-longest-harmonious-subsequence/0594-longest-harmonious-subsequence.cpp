class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0 , j = 0 , ans = 0;
        while(i <= j && j < nums.size()){
            if(nums[j] - nums[i] <= 1){
                if(nums[j] - nums[i] == 1) ans = max(ans , j-i+1);
                j++;
            } 
            else i++;
            
        } 
        return ans;
    }
};