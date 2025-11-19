class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){
            bool flag = false;
            for(int i = 0; i<nums.size(); i++){
                if(original == nums[i]){
                    original *= 2;
                    flag = true;
                } 
            }
            if(!flag) return original;
        }
        return original;
    }
};