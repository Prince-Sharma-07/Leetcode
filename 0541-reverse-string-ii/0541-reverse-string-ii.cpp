class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0 , n = s.size();
        while(i < n-1){
            if(i-1+k < n) reverse(s.begin()+i , s.begin()+i+k); 
            else reverse(s.begin()+i , s.end());
            i += 2*k;
        }
        return s;
    }
};