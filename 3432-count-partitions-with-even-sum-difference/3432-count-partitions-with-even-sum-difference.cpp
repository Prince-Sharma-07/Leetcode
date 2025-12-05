class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size(), count = 0;
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i<n; i++) prefix[i] = prefix[i-1] + nums[i]; 
        for(int i = 0; i<n-1; i++){
            int sum = prefix[i];
            if((2*sum - prefix[n-1])%2 == 0) count++;
        }
        return count;
    }
};