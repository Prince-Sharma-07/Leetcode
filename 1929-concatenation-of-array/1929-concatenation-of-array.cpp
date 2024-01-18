class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans;
        for(int i=0; i<2; i++){
      for(auto i : nums){
           ans.push_back(i);
      }
        }
        return ans;
    }
};