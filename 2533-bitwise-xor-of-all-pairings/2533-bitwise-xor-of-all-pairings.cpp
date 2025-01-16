class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> mp;
        for(auto i : nums1){
            mp[i]+=nums2.size();
        }
        for(auto i : nums2){
            mp[i]+=nums1.size();
        }

        int ans = 0;

        for(auto i : mp){
            if(i.second & 1) ans ^= i.first;
        }
        
        return ans;
    }
};