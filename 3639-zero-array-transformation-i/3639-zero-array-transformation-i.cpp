class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n+1 , 0);

        for(auto i : queries){
            int l = i[0];
            int r = i[1];
            diff[l]++;
            if(r+1 < n) diff[r+1]--;
        }
        
        for(int i = 1; i<n; i++){
            diff[i] += diff[i-1];
        }
        for(int i = 0; i<n; i++){
            nums[i] -= diff[i];
            if(nums[i] > 0) return false;
        }
        return true;
    }
};