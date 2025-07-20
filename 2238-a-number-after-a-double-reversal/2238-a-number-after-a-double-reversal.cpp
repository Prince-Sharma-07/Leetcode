class Solution {
public:
    int rev(int n){
        int reverse = 0;
        while(n){
            reverse = reverse*10 + n%10;
            n/=10;
        }
        return reverse;
    }
    bool isSameAfterReversals(int num) {
        int rev1 = rev(num);
        int rev2 = rev(rev1);
        return rev2 == num;
    }
};