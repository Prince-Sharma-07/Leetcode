class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int , int> mp;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]%2 == 0) mp[nums[i]]++;
        }
        if(mp.empty()) return -1;
        int maxi = INT_MIN , ans = INT_MAX;
        for(auto it : mp){
            if(it.second > maxi){
                ans = it.first;
                maxi = it.second;
            }
        }
        return ans;
    }
};