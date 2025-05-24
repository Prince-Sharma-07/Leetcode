class Solution {
public:
    bool check(string s , char c){
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]==c) return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0; i<words.size(); i++){
           string temp = words[i];
           if(check(temp  , x)) ans.push_back(i);
        }
        return ans;
    }
};