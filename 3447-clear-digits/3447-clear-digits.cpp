class Solution {
public:
    string clearDigits(string s) {
        string ans = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i]<97){
                ans.pop_back();
                continue;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};