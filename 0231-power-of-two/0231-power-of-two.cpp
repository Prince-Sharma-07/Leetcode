class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return 0;
        int x = 1;
        while(x <= n){
            if(x == n) return 1;
            if(x > INT_MAX/2) break;
            x = x << 1;
        }
        return 0;
    }
};