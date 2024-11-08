class Solution {
public:
    int alternateDigitSum(int n) {
        int rev = 0;

        while(n){
            rev = (rev*10)+n%10;
            n/=10;
        }

        int i = 0 , ans = 0;
        while(rev){
            if(i&1){
                ans -= rev%10;
                rev /= 10;
                i = 0;
            }
            else{
                ans += rev%10;
                rev /= 10;
                i = 1;
            }
        }
        return ans;
    }
};