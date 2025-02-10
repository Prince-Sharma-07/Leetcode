class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        int i = 0;
        while(i<s.size()){
            if(s[i] < 97) st.pop();
            else st.push(s[i]);
            i++;
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};