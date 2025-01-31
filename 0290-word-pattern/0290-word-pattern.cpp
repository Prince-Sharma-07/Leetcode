class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char , string> mp;
        unordered_map<string , char> mp2;
        vector<string> words;
        string temp;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == ' '){
                words.push_back(temp);
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        words.push_back(temp);
        
        if(words.size() != pattern.size()) return false;

        for(int i = 0; i<pattern.size(); i++){
            if(mp.find(pattern[i]) == mp.end() && mp2.find(words[i]) == mp2.end()){
               mp[pattern[i]] = words[i];
               mp2[words[i]] = pattern[i];
            } 
            else{
                if(mp[pattern[i]] != words[i] || mp2[words[i]] != pattern[i]) return false;
            }
        }
        return true;
    }
};