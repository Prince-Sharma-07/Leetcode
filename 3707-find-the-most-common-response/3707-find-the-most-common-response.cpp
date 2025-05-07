class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string , pair<int , int>> mp;

        for(int i = 0; i<responses.size(); i++){
            for(auto j : responses[i]){
                if(mp.find(j) == mp.end()){
                    mp[j].first++;
                    mp[j].second = i;
                } 
                else if(mp.find(j) != mp.end() && mp[j].second != i){
                    mp[j].first++;
                    mp[j].second = i;
                }
            }
        }
        int maxi = 0;
        string ans;
    

        for(auto i : mp){
            if(i.second.first > maxi){
                ans = i.first;
                maxi = i.second.first;
            }
        }
        return ans;
    }
};