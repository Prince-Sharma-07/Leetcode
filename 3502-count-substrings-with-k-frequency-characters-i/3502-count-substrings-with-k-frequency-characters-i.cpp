class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        unordered_map<int , int> mp;
        int i=0,j=0;
        int count = 0, n = s.size();

        while(j<n) {
            int c=s[j]-'a';
            mp[c]++;
            while(mp[c]>=k) {
                count += n-j;
                mp[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return count;
    }
};