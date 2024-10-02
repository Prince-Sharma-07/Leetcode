class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2 = arr;
        vector<int> ans;
        sort(arr2.begin() , arr2.end());
        unordered_map<int , int> mp;
        int k = 1;
        for(int i = 0; i<arr2.size(); i++){
            if(!mp[arr2[i]]){
             mp[arr2[i]] = k;
             k++;
            }   
        } 
        for(int i  = 0; i<arr.size(); i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};