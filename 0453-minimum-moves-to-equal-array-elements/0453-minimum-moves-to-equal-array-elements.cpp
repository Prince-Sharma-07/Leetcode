class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNum = INT_MAX , sum = 0;
        for(auto i : nums){
            sum += i;
            if(i<minNum) minNum = i;
        }
        return sum - minNum * nums.size();
    }
};
