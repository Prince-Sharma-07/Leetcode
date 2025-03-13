class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int , char>> pq;
        unordered_map<char , int> mp;
        for(auto i : s){
            mp[i]++;
        }
        for(auto it : mp){
            pq.push({it.second , it.first});
        }

        if((pq.top().first * 2) - 1 > s.size()) return "";
        
        vector<char> res(s.size());
        int j = 0;
        while(!pq.empty()){
            int currFreq = pq.top().first;
            char currChar = pq.top().second;
            pq.pop();
            
            while(currFreq--){
                res[j] = currChar; 
                j+=2;
                if(j >= s.size()) j = 1;
            }
            
        }
        
        string ans;
        for(auto i : res){
            ans += i;
        }

        return ans;
    }
};