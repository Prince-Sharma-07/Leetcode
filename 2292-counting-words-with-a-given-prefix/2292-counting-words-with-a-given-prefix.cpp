class Solution {
public:
int checkPrefix(string word , string pref){
    int i = 0 , check = 0;
    while(i<pref.size()){
       if(word[i] == pref[i]){
         i++;
         check = 1;
       }
       else return check = 0;
    }
    return check;
}
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i = 0; i<words.size(); i++){
            count += checkPrefix(words[i],pref);
        }
        return count;
    }
};