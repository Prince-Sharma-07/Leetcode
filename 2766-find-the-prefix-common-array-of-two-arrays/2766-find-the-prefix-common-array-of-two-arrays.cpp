class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> s;
        vector<int> ans;
        int sum = 0;
        for(int i = 0; i<A.size(); i++){
           int prevSize = s.size();
           s.insert(A[i]);
           s.insert(B[i]);
           int diff = s.size()-prevSize;
           sum += abs(diff-2);
           ans.push_back(sum);
        }
        return ans;
    }
};