class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int i = 1 , count = 0;
        while(n>0){
            n -= i;
            if(n%i == 0) count++;
            i++;
        }
        return count;
    }
};