class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char , bool> mp;

        for(char i : allowed){
            mp[i] = 1;
        }
        int count = 0;
        for(string s : words){
            bool flag = 1;
            for(int i = 0; i<s.size(); i++){
                if(!mp[s[i]]){
                    flag = 0;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};