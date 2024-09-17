class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string , int> mp;
        vector<string> ans;
        string word="";
        for(int i = 0; i<s1.size(); i++){
            if(s1[i] == ' '){
                mp[word]++;
                word = "";
            }
            else{
            word += s1[i];
            }
        }
        mp[word]++;
        word = "";

        for(int i = 0; i<s2.size(); i++){
            if(s2[i]==' '){
                mp[word]++;
                word = "";
            }
            else{
            word += s2[i];
            }
        }
        mp[word]++;
        word = "";


       for(auto i :  mp){
        if(i.second == 1) ans.push_back(i.first);
       }
        return ans;
    }
};