class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        st.push(s[0]);

        for(int i = 1; i<s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(st.top() == 'A' && s[i] == 'B' || st.top()  == 'C' && s[i] == 'D'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.size();
     }
};