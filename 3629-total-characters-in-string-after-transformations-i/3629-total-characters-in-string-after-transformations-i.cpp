class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int count = 0, m = 1e9 + 7;
        vector<int> mp(26 , 0);
        for (auto &ch : s) {
            mp[ch-'a']++;
        }

        for (int i = 0; i < t; i++) {
            vector<int> temp(26 , 0);
            for (int i = 0; i<26; i++) {
                char ch = i + 'a';
                int freq = mp[i];

                if (ch != 'z'){
                    ch++;
                    temp[ch-'a'] = (temp[ch -'a'] + freq) % m;
                }
                else {
                    temp[0] = (temp[0] + freq) % m;
                    temp[1] = (temp[1] + freq) % m;
                }
            }
            mp = move(temp);
        }

        for (auto i : mp) {
            count = (count + i)%m;
        }
        return count;
    }
};