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
    int isPrefixOfWord(string sentence, string searchWord) {
         int count = 0 , check = 0; 
         string word = "";
        for(int i = 0; i<sentence.size(); i++){
            word += sentence[i];
            if(sentence[i] == ' '){
            count++;
            int check = checkPrefix(word,searchWord);
             if(check == 1) return count;
            else word = "";
            }
            if(i == sentence.size()-1){
                count++;
                word += sentence[i];
                check = checkPrefix(word,searchWord);
            if(check == 1) return count;
            else word = "";
            }
        }
        return -1;
    }
};