class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN , rightMax = 0;
        
        for(int i = (int)prices.size()-1; i>=0; i--){
            maxProfit = max(maxProfit , rightMax - prices[i]);
            rightMax = max(rightMax , prices[i]);
        }

        if(maxProfit < 0) return 0;
        return maxProfit;
    }
};