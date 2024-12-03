class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int trueLen = s.size();
        int newLen = trueLen + spaces.size();
        
        s.resize(newLen);
        s[newLen] = '\0';
        newLen--;
        int idx = spaces.size()-1;
        int j;
        for(j = trueLen-1; j>=0; j--){
            if(idx < 0) break;
            if(j == spaces[idx]){
                s[newLen] = s[j];
                newLen--;
                s[newLen] = ' ';
                newLen--;
                idx--;
            }
            else{
                s[newLen] = s[j];
                newLen--;
            }
        }
        while(j >= 0){
          s[newLen] = s[j];
          j--;
          newLen--;
        }
        return s;
    }
};