class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i = 0;
        while(i < nums.size() && nums[i] == 0) i++;
        int j = i+1;

        while(j < nums.size()){
            if(nums[j] == 1){
                if(j-i-1 < k) return false;
                i = j;
            }
            j++;
        }

        return true;
    }
};