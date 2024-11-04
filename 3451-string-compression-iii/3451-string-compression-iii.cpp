class Solution {
public:
    string compressedString(string word) {
        
        string comp;
        int i = 0;
        while(i<word.size()){
            int count = 1;
            while(count<9 && i<word.size()){
               if(word[i]==word[i+1]){
               count++;
               i++;
               }
              else{
               break;
             }
         }
                comp += to_string(count);
                comp += word[i];
                i++;
        }
        return  comp;
    }
};