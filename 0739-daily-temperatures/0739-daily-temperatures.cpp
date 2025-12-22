class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> idx, ans;
        stack<pair<int,int>> st;
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && st.top().first <= temperatures[i]) st.pop();
            if(st.empty()) idx.push_back(0);
            else idx.push_back(st.top().second);
            st.push({temperatures[i], i});
        }
        reverse(idx.begin(), idx.end());
        for(int i = 0; i<n; i++){
            if(idx[i] == 0) ans.push_back(0);
            else ans.push_back(idx[i] - i);
        }
        return ans;
    }
};