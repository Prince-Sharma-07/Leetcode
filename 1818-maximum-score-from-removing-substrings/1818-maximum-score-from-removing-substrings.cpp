class Solution {
public:
    void removeSubstring(string &s , int x , int y , string &rem , stack<char> &st){ 
        for(auto ch : s) {
            if (x >= y) {
                if (st.empty()) {
                    st.push(ch);
                } 
                else if (st.top() != 'a' || ch != 'b') {
                    st.push(ch);
                } 
                else {
                    st.pop();
                }
            } 
            else {
                if (st.empty()) {
                    st.push(ch);
                } 
                else if (st.top() != 'b' || ch != 'a') {
                    st.push(ch);
                } 
                else {
                    st.pop();
                }
            }
        }
        int n = st.size();
        for (int i = 0; i < n; i++) {
            rem += st.top();
            st.pop();
        }
        reverse(rem.begin() , rem.end());
    }
    int maximumGain(string s, int x, int y) {
        int score = 0;
        stack<char> st;
        string rem = "" , rem2 = "";
        removeSubstring(s , x , y , rem , st);
        score += ((s.size()-rem.size())/2)*max(x,y);
        removeSubstring(rem , y ,x , rem2 , st);
        score += ((rem.size()-rem2.size())/2)*min(x,y);
        return score;
    }
};