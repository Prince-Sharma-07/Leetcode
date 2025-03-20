class Solution {
public:
    bool validPalindrome(string s) {
        int cnt = 0 , i = 0 , j = s.size()-1 ;
        bool flag = 0;

        while(i < j){
            if(s[i] != s[j]){
                if(cnt == 1){
                    flag = 1;
                    break;
                } 
                cnt++;
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        
        if(flag){
        cnt = 0 , i = 0 , j = s.size()-1;

        while(i < j){
            if(s[i] != s[j]){
                if(cnt == 1) return 0;
                cnt++;
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        }

        return 1;
    }
};