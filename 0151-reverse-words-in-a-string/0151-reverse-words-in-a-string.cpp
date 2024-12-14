class Solution {
public:
    string reverseWords(string s) {
        int i = 0 , j = s.size()-1 , n = s.size();
        while(i < j){
            if(s[i] == ' '){
               i++;
            }
            else if(s[j] == ' '){
                j--;
            }
            else break;
        }

       string ans;

       for(int k = j; k>=i; k--){
         while(s[k] == ' ' && s[k-1] == ' ' && k >= i) k--;
         ans += s[k];
       }
       i = 0 , j = 0;
       while(j<ans.size()){
            if(ans[j] == ' '){
                reverse(ans.begin()+i , ans.begin()+j);
                i = j + 1;
                j = i;
            }
            else j++;
        }
       reverse(ans.begin()+i , ans.begin() + j);
       return ans;
        
    }
};