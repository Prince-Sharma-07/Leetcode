class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        string ans;

        for(int i = 0; i<s.size(); i++){
            if(s[i] != '*') st.push(s[i]);
            else if(!st.empty()) st.pop();
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin() , ans.end());
        return ans;
    }

};