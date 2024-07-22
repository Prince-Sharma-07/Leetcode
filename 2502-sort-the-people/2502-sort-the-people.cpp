class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> vec(names.size());
        for(int i = 0; i<names.size(); i++){
            vec[i].first = heights[i];
            vec[i].second = names[i];
        }
        sort(vec.begin(),vec.end(), greater<>());
        vector<string> ans;
        for(auto it : vec){
            ans.push_back(it.second);
        }
        return ans;
    }
};