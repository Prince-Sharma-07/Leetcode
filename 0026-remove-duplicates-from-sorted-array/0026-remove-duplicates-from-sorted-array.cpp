class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k;
        int i=0;
            for(int j= 1; j<nums.size(); j++){
                if(nums[i]!=nums[j]){
                    nums[i+1]=nums[j];
                    i++;
                }
            }
             k=i+1;
            return k;
    }
};
