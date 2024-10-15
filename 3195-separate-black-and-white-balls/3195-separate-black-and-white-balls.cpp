class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size()-1;
        long long count = 0;
        int ones = n;
        for(int i = n; i>=0; i--){
            if(s[i] == '1'){
              count += ones-i;
              ones--;
            }
        }
         return count;
    }
};