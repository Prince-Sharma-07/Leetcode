class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), ans = 0;
        vector<int> left, right;
        stack<int> st;
        for(int i = 0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            if(st.empty()) left.push_back(-1);
            else left.push_back(st.top());
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            if(st.empty()) right.push_back(n);
            else right.push_back(st.top());
            st.push(i);
        }
        reverse(right.begin(), right.end());
        for(int i = 0; i<n; i++){
            int l = i - left[i];
            int r = right[i] - i;
            ans = max(ans, heights[i] * (l+r-1));
        }
        return ans;
    }
};