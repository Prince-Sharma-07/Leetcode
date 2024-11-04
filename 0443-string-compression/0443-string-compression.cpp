class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        int i = 0 , j = 0 , count = 0;
        while(j<chars.size()) 
        {
            if(chars[i] == chars[j]){
                j++;
                count++;
            }
            else{
            if(count == 1){
                s += chars[i];
                count = 0;
            } 
            else{
                s += chars[i];
                string no;
                while (count) {
                    no += to_string(count % 10);
                    count /= 10;
                }
                reverse(no.begin(), no.end());
                s += no;
            }
            i = j;
            }
        }
         if(count == 1){
                s += chars[i];
                count = 0;
            } 
            else{
                s += chars[i];
                string no;
                while (count) {
                    no += to_string(count % 10);
                    count /= 10;
                }
                reverse(no.begin(), no.end());
                s += no;
            }
        int k = 0;
        while (k < s.size()) {
            chars[k] = s[k];
            k++;
        }
        return k;
    }
};