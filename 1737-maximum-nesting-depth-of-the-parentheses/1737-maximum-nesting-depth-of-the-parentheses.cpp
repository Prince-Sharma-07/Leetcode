class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0 , count = 0;
        stack<char> st;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
                maxi = max(maxi , count);
            }
            else if(s[i] == ')') count--;
        }
        return maxi;
    }
};