class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size() , sum = 0;
        for(int i = 1; i<=n; i++){
            if(n%i == 0) sum += nums[i-1] * nums[i-1];
        }
        return sum;
    }
};