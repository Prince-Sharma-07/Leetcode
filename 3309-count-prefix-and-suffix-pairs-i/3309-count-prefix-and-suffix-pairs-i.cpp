class Solution {
public:
     bool isPrefixAndSuffix(string str1 , string str2){
            int i = str1.length();
            int j =  str2.length();
         if(i>j){
         return false;
         }
           int size = min(i,j);
           int l = 0;
            for(int k = size; k>0; k--){
                if(str1[i - k] == str2[j - k] && str1[l] == str2[l] ){
                    if(l<size) l++;
                }
                
                else return false;
            }
            return true;
        }
    
    int countPrefixSuffixPairs(vector<string>& words) {
        
        string ans;
        int count = 0;
        for(int i = 0; i<words.size()-1; i++){
            for(int j = i+1; j<words.size(); j++){
              if(isPrefixAndSuffix(words[i], words[j]) == true) count++;
            }
        }
        return count;
    }
};