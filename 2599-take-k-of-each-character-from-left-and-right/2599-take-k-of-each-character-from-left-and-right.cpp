class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.length();

        int count_a = 0; // delete
        int count_b = 0; // delete
        int count_c = 0; // delete
        for (char& ch : s) {
            if (ch == 'a')
                count_a++;
            else if (ch == 'b')
                count_b++;
            else
                count_c++;
        }

        if (count_a < k || count_b < k || count_c < k) {
            return -1; // not possible to delete k characters
        }

        int i = 0;
        int j = 0;
        int notDeletedWindowSize = 0;

        while (j < n) {
            if (s[j] == 'a') {
                count_a--;
            } else if (s[j] == 'b') {
                count_b--;
            } else if (s[j] == 'c') {
                count_c--;
            }

            // if deletion count of any character becomes less than k, then
            // shrink the window and bring them back
            while (i <= j && (count_a < k || count_b < k || count_c < k)) {
                // ith pointer move to left
                if (s[i] == 'a') {
                    count_a++;
                } else if (s[i] == 'b') {
                    count_b++;
                } else {
                    count_c++;
                }
                i++;
            }

            notDeletedWindowSize = max(notDeletedWindowSize, j - i + 1);
            j++;
        }

        return n - notDeletedWindowSize; // minutes
    }
};