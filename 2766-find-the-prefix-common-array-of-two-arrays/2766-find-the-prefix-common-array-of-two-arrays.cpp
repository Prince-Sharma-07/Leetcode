class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<bool> freq(A.size()+1 , 0);
        vector<int> ans;
        for(int i = 0; i<A.size(); i++){
            freq[B[i]] = 1;
            int count = 0;
            for(int j = 0; j<=i; j++){
                if(freq[A[j]]) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};