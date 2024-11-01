class Solution {
public:
    string makeFancyString(string s) {
        if(s.size() < 3) return s;
        int i = 0, j = 1,  k = 2;
        while(k<s.size()){
            if(s[i] == s[j] && s[j] == s[k]){
                s[i] = '$';
                i++;
                j++;
                k++;
            }
            else{
                i++;
                j++;
                k++;
            }
        }
        string ans;
        for(auto i : s){
            if(i != '$')
            ans += i;
        }
        return ans;
    }
};