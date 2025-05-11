class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char , int> mp;
        int count = 0;
        vector<pair<int , char>> arr;
        

        for(auto i : s){
            mp[i]++;
        }
        if(mp.size() < k) return 0;
        for(auto i : mp){
            arr.push_back({i.second , i.first});
        }
        
        sort(arr.begin() , arr.end() , greater<pair<int , char>>());

        while(arr.size() != k){
            count += arr[arr.size()-1].first;
            arr.pop_back();
        }

        return count;
    }
};