class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int , string> mpp;
        for(int i = 0; i<names.size(); i++){
            mpp[heights[i]] = names[i];
        }
        vector<string> ans;
        for(auto it = mpp.crbegin(); it!=mpp.crend(); ++it){
            ans.push_back(it->second);
        }
        return ans;
    }
};