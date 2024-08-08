class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans = (long)dividend/divisor;
        if(ans < INT_MIN){
            return -2e31;
        }
        else if(ans > INT_MAX){
            return 2147483648-1;
        }
        return ans;
    }
};