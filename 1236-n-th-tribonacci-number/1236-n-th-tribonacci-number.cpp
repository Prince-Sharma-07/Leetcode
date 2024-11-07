class Solution {
public:
    int tribonacci(int n) {
         if (n < 3) {
            return n > 0 ? 1 : 0;
        }
        
        int a = 0, b = 1, c = 1;
        
        for (int i = 2; i < n; ++i) {
            int tmp = a + b + c;
            a = b;
            b = c;
            c = tmp;
        }
        
        return c;
    }
};