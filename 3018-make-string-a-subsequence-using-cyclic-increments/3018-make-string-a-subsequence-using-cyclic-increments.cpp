class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0 , j = 0;

        while(i < str1.size() && j<str2.size()){
            if(str1[i] == str2[j] || str1[i]+1 == str2[j] || str1[i] - 25 == str2[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        cout<<(str1[0]+1);
        if(j >= str2.size()) return true;
        return false;
    }
};