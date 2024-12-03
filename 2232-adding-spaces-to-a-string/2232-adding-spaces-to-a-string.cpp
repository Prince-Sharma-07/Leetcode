class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        int j = 0;
        int i;
        for(i = 0; i<s.size(); i++){
            if(j>=spaces.size()) break;
            if(i != spaces[j]) res+=s[i];
            else{
                res += ' ';
                res += s[i];
                j++;
            }
        }

        while(i<s.size()){
            res += s[i];
            i++;
        }
        return res;
    }
};