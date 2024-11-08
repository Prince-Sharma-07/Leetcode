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
            if(i%2 == 0){
                ans += rev%10;
                rev /= 10;
                i++;
            }
            else{
                ans -= rev%10;
                rev /= 10;
                i++;
            }
        }
        return ans;
    }
};