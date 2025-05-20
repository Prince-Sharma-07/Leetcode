class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
         int totalSum = 0;
        int maxKadane = nums[0], currMax = nums[0];
        int minKadane = nums[0], currMin = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxKadane = max(maxKadane, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minKadane = min(minKadane, currMin);
        }

        totalSum = accumulate(nums.begin(), nums.end(), 0);

       
        if (maxKadane < 0) return maxKadane;

        return max(maxKadane, totalSum - minKadane);
    }
};