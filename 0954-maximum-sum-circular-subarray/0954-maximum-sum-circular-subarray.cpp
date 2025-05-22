class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMaxSum = 0, currMinSum, maxSum = INT_MIN, TotalSum = 0, minSum = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            currMaxSum += nums[i];
            currMinSum += nums[i];

            maxSum = max(maxSum, currMaxSum);
            minSum = min(minSum, currMinSum);

            if (currMaxSum < 0)
                currMaxSum = 0;
            if (currMinSum > 0)
                currMinSum = 0;
        }

        TotalSum = accumulate(nums.begin(), nums.end(), 0);

        return max(maxSum , TotalSum - minSum);
    }
};