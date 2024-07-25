class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int , int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        int i = 0;
        int mini = *min_element(nums.begin() , nums.end());
        int maxi = *max_element(nums.begin() , nums.end());
        for(int num = mini; num<=maxi; num++){
            while(mpp[num] > 0){
                nums[i] = num;
                i++;
                mpp[num]--; 
            }
        }
        return nums;
    }
};