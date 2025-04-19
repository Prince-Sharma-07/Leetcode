class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
       sort(nums.begin() , nums.end());

       int i = 0 , j = 1 , n = nums.size();
       long long count = 0;

      for(int i = 0; i<n; i++){
        auto idx = lower_bound(nums.begin()+i+1 , nums.end() , lower-nums[i]) - nums.begin();
        int x = idx - 1 - i;

        idx = upper_bound(nums.begin()+i+1 , nums.end() , upper-nums[i]) - nums.begin();

        int y = idx - 1 - i;

        count += (y-x);

      }

       return count;
    }
};