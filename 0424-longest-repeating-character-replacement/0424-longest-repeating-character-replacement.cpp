class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0, r = 0, maxlen = 0;
        int maxf = 0;
        vector<int> count(26, 0);

        while (r < n) {
            count[s[r] - 'A']++;
            maxf = max(maxf, count[s[r] - 'A']);

            // If more than k chars need replacement, shrink window
            if ((r - l + 1) - maxf > k) {
                count[s[l] - 'A']--;
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};