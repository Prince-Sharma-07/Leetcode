class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
        return 0;
    }

    int maxFreqSum(string s) {
        vector<int> freq(26 , 0);
        int v = 0 , f = 0;

        for(auto i : s){
            freq[i-'a']++;
        }

        for(int i = 0; i<26; i++){
            if(isVowel(i+'a')) v = max(freq[i] , v);
            else f = max(freq[i] , f);
        }

        return v+f;
        
    }
};