class Solution {
public:
    string removeOuterParentheses(string s) {
        string t , ans;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
                if(count > 1) t += s[i];
            }
            else if(s[i] == ')'){
                count--;
                if(count > 0) t += s[i];
                else{
                    ans += t;
                    t = "";
                }
            } 
        }
        return ans;
    }
};