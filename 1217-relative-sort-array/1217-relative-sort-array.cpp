class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int , int> mp;
        vector<int> ans;
        vector<int> sort;
        for(int i = 0; i<arr1.size(); i++){
            mp[arr1[i]]++;
        }
        for(int i = 0; i<arr2.size(); i++){
            while(mp[arr2[i]]--){
                ans.push_back(arr2[i]);
            }
        }
        for(auto i : mp){
            while(i.second>0){
                ans.push_back(i.first);
                i.second--;
            }
        }
        return ans;
    }
};