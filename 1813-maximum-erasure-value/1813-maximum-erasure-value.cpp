class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int i = 0, j = 0, sum = 0 , maxi = INT_MIN;
        while (j < nums.size() && i<=j) {
            if (!mp[nums[j]]) {
                sum += nums[j];
                mp[nums[j]]++;
                j++; 
                maxi = max(sum , maxi);
            }
            else{
                sum -= nums[i];
                mp[nums[i]]--;
                i++;
                maxi = max(sum , maxi);
            }
        }
        return maxi;
    }
};