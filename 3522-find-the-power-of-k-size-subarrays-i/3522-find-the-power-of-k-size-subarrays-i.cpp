class Solution {
public:
bool Check(const vector<int>& subarr) {
    for (int i = 1; i < subarr.size(); ++i) {
        if (subarr[i] != subarr[i - 1] + 1) {
            return false;
        }
    }
    return true;
}
    vector<int> resultsArray(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> result;
    
    for (int i = 0; i <= n - k; ++i) {
        vector<int> subarr(nums.begin() + i, nums.begin() + i + k);
        
        if (Check(subarr)) {
            result.push_back(*max_element(subarr.begin(), subarr.end()));
        } else {
            result.push_back(-1);
        }
    }
    
    return result;
    }
};