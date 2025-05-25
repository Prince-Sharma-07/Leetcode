class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string , int> mp;
        int count = 0;

        for(auto i : words){
            string rev = i;
            swap(rev[0] , rev[1]);

            if(mp[rev] > 0){
                count += 4;
                mp[rev]--;
            }
            else {
                mp[i]++;
            }
        }
        
        for(auto &it : mp){
            string word = it.first;
            int freq = it.second;

            if(word[0] == word[1] && freq > 0){
                count += 2;
                break;
            }
        }
        return count;
    }
};