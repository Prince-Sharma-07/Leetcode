class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int leftMax = 0 , maxScore = 0;
        for(int  j = 1; j<values.size(); j++){
            leftMax = max(leftMax , values[j-1]+j-1);
            maxScore = max(maxScore , leftMax + values[j]-j);
        }
        return maxScore;
    }
};