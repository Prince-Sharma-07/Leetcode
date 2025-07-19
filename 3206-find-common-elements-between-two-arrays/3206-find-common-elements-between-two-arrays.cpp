class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> mp1;
        unordered_map<int , int> mp2;
        int ans1 = 0 , ans2 = 0;
        for(auto i : nums1){
            mp1[i]++;
        }
        for(auto i : nums2){
            mp2[i]++;
        }
        for(auto i : nums1){
            if(mp2[i]) ans1++;
        }
        for(auto i : nums2){
            if(mp1[i]) ans2++;
        }
        return {ans1 , ans2};
    }
};