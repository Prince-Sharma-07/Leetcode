class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int size = n + rolls.size();
        int sum = 0;
        for(auto i : rolls){
            sum += i;
        }

        int x = (mean*size)-sum;


        if(n*6 < x || x < n) return {};

        int rem = x%n;
        int quo = x/n;

        vector<int> ans(n,quo);
        for(int i = 1; i<=rem; i++){
            ans[i]++;
        }

        return ans;

    }
};