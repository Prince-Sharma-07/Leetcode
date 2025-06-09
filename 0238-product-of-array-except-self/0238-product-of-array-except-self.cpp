class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0 , prod = 1 , idx;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
                idx = i;
            } 
            else prod *= nums[i];
            
            if(zeros > 1) break;
        }

        vector<int> ans(nums.size() , 0);

        if(zeros > 1) {
        return ans;
        }
        else if(zeros == 1){
            ans[idx] = prod;
            return ans;
        }
        
        for(int i = 0; i<nums.size(); i++){
            ans[i] = prod/nums[i];
        }

        return ans;
        
    }
};