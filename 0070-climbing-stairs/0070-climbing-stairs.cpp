class Solution {
public:
    int climbStairs(int n) {
        int a = 1 , b = 2 , i=3;
        if(n==a){
            return a;
        }
        else if(n==b){
            return b;
        }
        while(i<=n){
            b = a+b;
            a = b-a;
            i++;
        }
        return b;
    }
};