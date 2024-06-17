class Solution {
public:
    bool judgeSquareSum(int c) {
        long left  = 0;
        long right = (int) sqrt(c);
        while(left<=right){
            if(left*left + right*right == c) return true;
            else if(left*left + right*right < c) left++;
            else right--;
        }
        return false;
    }
};