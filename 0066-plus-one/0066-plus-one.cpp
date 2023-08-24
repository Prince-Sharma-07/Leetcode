class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
            if( digits[n-1]!=9){
                digits[n-1] += 1;
                return digits;
            }
        for (int j =1; j<=n; j++){
             if (digits[n - j] == 9) {
                digits[n - j] = 0;
            } else {
                digits[n - j] += 1;
                return digits;
            }
        }
          digits.insert(digits.begin(), 1);
        return digits;
    }
};