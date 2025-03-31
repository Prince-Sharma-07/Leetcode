class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
        return 0;
    }

    int maxVowels(string s, int k) {
        
        int maxVowel = 0 , i = 0 , j = 0 , n = s.size() , currVowel = 0;

        while(j < k){
            if(isVowel(s[j])) currVowel++;
            j++;
        }

        maxVowel = max(currVowel , maxVowel);

        while(j < n){
            if(isVowel(s[i])) currVowel--;
            if(isVowel(s[j])) currVowel++; 
            maxVowel = max(currVowel , maxVowel);
            i++;
            j++;
        }
        
        return maxVowel;
    }
};