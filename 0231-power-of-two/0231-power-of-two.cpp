class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long no = (long long)n;
        if(no == 0) return 0;
        return (no & (no-1)) == 0;
    }
};