class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i = 0; i<arr.size(); i++) {
            mp[arr[i]] = i;
        }
        for(auto i : mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        for (int i = 0; i < arr.size(); i++) {
            if(mp.find(arr[i]*2) != mp.end() && mp[arr[i]*2] != i) return true;
        }
        return false;
    }
};