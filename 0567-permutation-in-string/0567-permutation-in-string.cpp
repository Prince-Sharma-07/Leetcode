class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin() , s1.end());
        int n = s1.size();
        int m = s2.size();
        if(n > m) return 0;

        for(int i = 0; i<=m-n; i++){
            string substring = s2.substr(i , n);
            sort(substring.begin() , substring.end());
            if(s1 == substring) return 1;
        }

        return 0;
    }
};
