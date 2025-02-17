class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> ans;
        stack<int> st;
        for(int i = 1; i*i<=n; i++){
            if(n%i == 0){
                ans.push_back(i);
                st.push(n/i);
            } 
        }
        while(!st.empty()){
            if(ans.back() != st.top()){
            ans.push_back(st.top());
            }
            st.pop();
        }
        if(k-1 >= ans.size()) return -1;
        return ans[k-1];
    }
};