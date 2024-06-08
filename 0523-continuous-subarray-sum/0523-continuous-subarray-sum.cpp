class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size() , sum = 0;
        unordered_map <int , int> mpp;
        mpp[0] = -1;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            int rem = sum%k;
            if(mpp.find(rem)!=mpp.end()){
                if(i-mpp[rem] >= 2){
                    return true;
                }
                
            }
            else mpp[rem] = i;
        }
        return false;
    }
};