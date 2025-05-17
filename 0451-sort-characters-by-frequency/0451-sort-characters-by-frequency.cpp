class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char , int> mp;

        for(auto i : s){
           mp[i]++;
        }

        vector<pair<int , char>> freq;

        for(auto it : mp){
            freq.push_back({it.second , it.first});
        }

        sort(freq.begin() , freq.end() , greater<pair<int , char>>());

        for(auto i : freq){
            while(i.first--){
            ans += i.second;
            }
        } 

        return ans;
    }
};