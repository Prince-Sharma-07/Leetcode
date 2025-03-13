class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set <vector<int>> s;
        vector<vector<int>> v;
        int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0 ; i<n; i++){
        int ans = 0 - nums[i];
        int start = i+1;
        int end = n-1;
        while(start<end){
            if(nums[start]+nums[end] == ans){
               s.insert({nums[i],nums[start],nums[end]});
                start++;
                end--;
            }
            else if(nums[start]+nums[end]>ans) end--;
            else start++;
        }
    }
    for(auto triplets : s){
        v.push_back(triplets);
    }
    return v;
   }
};