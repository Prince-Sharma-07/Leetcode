class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin() , s.end());

        int d1 = 0;
        d1 = (d1 * 10) + s[0] - '0';
        d1 = (d1 * 10) + s[3] - '0';

        int d2 = 0;
        d2 = (d2 * 10) + s[1] - '0';
        d2 = (d2 * 10) + s[2] - '0';

        return d1+d2;
        
    }
};