class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = 0, curr = 0;
        int count = 0;

        for(auto i : nums){
            sum += i;
        }
       
        for(int i = 0; i<nums.size()-1; i++){
            curr += nums[i];
            sum = sum - nums[i];
            if(curr >= sum) count++;
        }

        return count;
    }
};