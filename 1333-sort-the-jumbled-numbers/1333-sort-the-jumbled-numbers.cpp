class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> vec;
        for(int i = 0; i<nums.size(); i++){
            string ans = to_string(nums[i]);
            int j = 0 , no = 0; 
            while(j<ans.size()){
            no  = (10*no) + mapping[ans[j]-'0'];
            j++;
            }
            vec.push_back({no , i});
        }
       
        sort(begin(vec) , end(vec));
        vector<int> ans;
        for(auto it : vec){
            ans.push_back(nums[it.second]);
        }
        return ans;
    }
};