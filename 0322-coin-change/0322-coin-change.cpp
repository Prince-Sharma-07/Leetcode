class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount < 1) return 0;
        vector<int> minCoin(amount+1);

        for(int i = 1; i<=amount; i++){
            minCoin[i] = INT_MAX;
            for(auto coin : coins){
                if(coin <= i && minCoin[i-coin] != INT_MAX)
                minCoin[i] = min(minCoin[i] , 1 + minCoin[i-coin]);
            }
        }

        if(minCoin[amount] == INT_MAX) return -1;
        return minCoin[amount];
    }
};