class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int Xor = 0;
        for(auto i : nums){
            Xor ^= i;
        }
        return Xor;
    }
};