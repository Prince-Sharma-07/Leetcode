class Solution {
public:

bool isNonDecreasing(const vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (nums[i] > nums[i + 1]) return false;
    }
    return true;
}
    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

    while (!isNonDecreasing(nums)) {
        int minSum = INT_MAX;
        int minIndex = -1;

        
        for (int i = 0; i < nums.size() - 1; ++i) {
            int sum = nums[i] + nums[i + 1];
            if (sum < minSum) {
                minSum = sum;
                minIndex = i;
            }
        }

       
        vector<int> newNums;
        for (int i = 0; i < minIndex; ++i) {
            newNums.push_back(nums[i]);
        }
        newNums.push_back(minSum);
        for (int i = minIndex + 2; i < nums.size(); ++i) {
            newNums.push_back(nums[i]);
        }

        nums = newNums;
        ++operations;
    }

    return operations;
    }
};