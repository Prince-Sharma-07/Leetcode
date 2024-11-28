class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , bool> mp1;
        unordered_map<int , bool> mp2;

        vector<int> v1;
        vector<int> v2;
        vector<vector<int>> ans;
        for(auto i : nums1){
          mp1[i] = true;
        }

         for(auto i : nums2){
          mp2[i] = true;
        }

        for(auto i : nums1){
            if(!mp2[i]) v1.push_back(i);
            mp2[i] = true;
        }
          for(auto i : nums2){
            if(!mp1[i]) v2.push_back(i);
            mp1[i] = true;
        }


    ans.push_back(v1);
    ans.push_back(v2);

    return ans;

    }
};