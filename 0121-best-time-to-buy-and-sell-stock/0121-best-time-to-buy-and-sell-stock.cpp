class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int lowest = prices[0];
        int profit =0;
        for (int i =1; i<prices.size(); i++){
            if(prices[i]<lowest){
                lowest = prices[i];
        }
            else if( prices[i]-lowest>profit){
            profit=prices[i]-lowest;
                }
        }
        return profit;
    }
};