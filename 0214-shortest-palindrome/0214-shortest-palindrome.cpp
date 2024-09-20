class Solution {
public:
    string shortestPalindrome(string s) {
    //     int n = s.size()-1;
    //     string rev = "";
    //     for(int i = s.size()-1; i>=0; i--){
    //         rev += s[i];
    //     }
    //     int i =0;
    //     if(rev == s){
    //         return s;
    //     }
    //     else{
    //         while(rev.substr[i,n] != s[])
    //     }
    // }

    string rev = s;
        reverse(begin(rev), end(rev));

        
        for(int i = 0; i < s.length(); i++) {

            if(!memcmp(s.c_str(), rev.c_str() + i, s.length()-i)) { //prefix in s == suffix in rev
                return rev.substr(0, i) + s;
            }
        }

        return rev + s;
    }
};