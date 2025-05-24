class Solution {
public:
    int kadane(vector<int>& nums) {
        int maxi = INT_MIN, currSum = 0;

        for (int i = 0; i<nums.size(); i++) {
             currSum += nums[i];
             maxi = max(maxi, currSum);
             if (currSum < 0) currSum = 0;
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int maxSum = kadane(nums);
        cout<<maxSum;
        for(int i = 0; i<nums.size(); i++){
            nums[i] *= -1;
        }

        int minSum = -1*(kadane(nums));

        if(maxSum < 0) return maxSum;
        
        return max(maxSum, totalSum - minSum);
    }
};