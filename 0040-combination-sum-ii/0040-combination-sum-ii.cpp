class Solution {
public:
void findsum(vector<int> &candidates , int target , int idx , vector<vector<int>> &ans, vector<int> &arr){
    if(target < 0) return;
    if(target == 0){
        ans.push_back(arr);
        return;
    }
   for(int i = idx; i<candidates.size(); i++){
    if(i>idx &&candidates[i] == candidates[i-1]){
        continue;                              
    }  
       arr.push_back(candidates[i]);  //Do
       findsum(candidates , target-candidates[i], i+1 , ans, arr); //explore
       arr.pop_back(); //undo
   }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(candidates.begin() , candidates.end());
        findsum(candidates , target , 0 , ans, arr);
        return ans;
    }
};