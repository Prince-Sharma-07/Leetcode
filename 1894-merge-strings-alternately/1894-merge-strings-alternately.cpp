class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i;
        for(i = 0; i<min(word1.size(),word2.size()); i++){
            ans += word1[i];
            ans += word2[i];
        }
        
        if(word1.size() >  word2.size()){
            while(i < word1.size()){
                ans += word1[i];
                i++;
            }
        }

        if(word2.size() >  word1.size()){
            while(i < word2.size()){
                ans += word2[i];
                i++;
            }
        }

        return ans;
    }
};