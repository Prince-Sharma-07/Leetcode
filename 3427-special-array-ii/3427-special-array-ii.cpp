class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    int n = queries.size();
    int m = nums.size();
    vector<bool> ans;
    vector<int> Prefix(m);
    Prefix[0] = 0;
    for(int i = 1; i<nums.size(); i++){
        if(nums[i]%2 == nums[i-1]%2) Prefix[i] = Prefix[i-1]+1;
        else Prefix[i] = Prefix[i-1];  
    }
    
    for(auto it : queries){
        int start = it[0];
        int end = it[1];
        if(Prefix[end] - Prefix[start]) ans.push_back(false);
        else ans.push_back(true);
    }
    return ans;
    }
};