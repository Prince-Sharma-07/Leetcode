class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256 , 0);

        int i = 0, j = 0 , maxi = 0;

        while(j<s.size()){
            freq[s[j]]++;
            while(freq[s[j]] > 1){
                freq[s[i]]--;
                i++;
            }
            maxi = max(j-i+1 , maxi);
            j++;
        }

        return maxi;
    }
};