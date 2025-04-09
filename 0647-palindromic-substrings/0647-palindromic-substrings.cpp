class Solution {
public:
    int countPalindromes(string s ,int l , int r){
        int count = 0;
        while(l >= 0 && r <= s.size()){
            if(s[l--] == s[r++]) count++;
            else break; 
        }
        return count;
    }

    int countSubstrings(string s) {
        int count = 0;
         for(int i = 0; i<s.size(); i++){
            //for even palindromes
           count += countPalindromes(s, i , i);
           //for odd palindromes
           count += countPalindromes(s , i , i+1);
         }
         return count;
    }
};