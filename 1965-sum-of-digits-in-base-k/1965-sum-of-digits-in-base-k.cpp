class Solution {
public:
    int sumBase(int n, int k) {
        int basek = 0;

        while(n){
            basek = (basek * 10) + (n%k);
            n /= k;
        }

        int sum = 0;
        
        while(basek){
            sum += basek%10;
            basek /= 10;
        }

        return sum;
    }
};