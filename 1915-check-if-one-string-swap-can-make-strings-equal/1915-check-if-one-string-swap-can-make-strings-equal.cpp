class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count  = 0;
        unordered_map<char , int> mp;
        for(int i = 0; i<s1.length(); i++){
            mp[s1[i]]++;
            mp[s2[i]]--;
            if(s1[i] != s2[i]) count++;
        }

        for(auto i : mp){
            if(i.second) return false;
        }

        if(count == 0 || count == 2 ) return true;
        return false;
    }
};