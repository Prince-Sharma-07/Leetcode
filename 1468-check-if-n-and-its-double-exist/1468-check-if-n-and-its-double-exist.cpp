class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i = 0; i<arr.size(); i++) {
            mp[arr[i]] = i+1;
        }
        for (int i = 0; i < arr.size(); i++) {
            if( mp[arr[i]*2] && mp[arr[i]*2] != i+1) return true;
        }
        return false;
    }
};