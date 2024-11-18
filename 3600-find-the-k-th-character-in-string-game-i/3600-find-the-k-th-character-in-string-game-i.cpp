class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size() < k){
            int n = s.size();
            int i = 0;
            while(i<n && s.size() < k){   
                s += s[i]+1;
                i++;
            }
        }
        return s[s.size()-1];
    }
};