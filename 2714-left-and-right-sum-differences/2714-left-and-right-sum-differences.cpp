class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum , rightSum;
        int l = 0 , r = 0;
        for(int i = 0; i<nums.size(); i++){
            leftSum.push_back(l);
            rightSum.push_back(r);
            l += nums[i];
            r += nums[nums.size()-i-1];
        }
        reverse(rightSum.begin() , rightSum.end());
        vector<int> ans;
        for(int i = 0; i<leftSum.size(); i++){
            ans.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return ans;
    }
};