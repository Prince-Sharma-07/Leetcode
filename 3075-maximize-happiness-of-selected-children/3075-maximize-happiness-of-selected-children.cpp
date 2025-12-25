class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0, cnt = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        for(int i = 0; i<k; i++){
            if(happiness[i] - cnt < 0) break;
            sum += happiness[i] - cnt;
            cnt++;
        }
        return sum;
    }
};