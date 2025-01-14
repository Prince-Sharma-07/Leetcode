class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> s;
        vector<int> ans;
        for(int i = 0; i<A.size(); i++){
           int prevSize = s.size();
           s.insert(A[i]);
           s.insert(B[i]);
           int sum = 2*(i+1) - s.size();
           ans.push_back(sum);
        }
        return ans;
    }
};