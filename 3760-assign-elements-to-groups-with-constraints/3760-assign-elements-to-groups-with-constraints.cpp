class Solution {
public:
    vector<int> assignElements(vector<int>& groups, vector<int>& elements) {
        unordered_map<int , int> mp;
        vector<int> ans(groups.size() , -1);

        for(int i = 0; i<elements.size(); i++){
            if(mp.find(elements[i]) == mp.end()) mp[elements[i]] = i;
        }
        
        for(int i = 0; i<groups.size(); i++){
            int mini = INT_MAX;
            for(int j = 1; j*j <= groups[i]; j++){
                if(groups[i] % j == 0){
                    if(mp.count(j)) mini = min(mini , mp[j]);
                    if(mp.count(groups[i]/j)) mini = min(mini , mp[groups[i]/j]);
                }   
            }
            if(mini != INT_MAX) ans[i] = mini;
        }
        return ans;
    }
};