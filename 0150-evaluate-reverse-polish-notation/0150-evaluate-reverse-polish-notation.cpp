class Solution {

    int toDigit(string s){
        int num = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '-') continue;
            int digit = s[i] - '0';
            num = (num*10) + digit;
        }
        if(s[0] == '-') return -num;
        return num;
    }
    bool isOperator(string op){
        if(op == "+" || op == "-" || op == "*" || op == "/") return true;
        return false;
    }
    int calculate(int num2, char op, int num1){
        int ans = 0;
        switch(op){
            case '+':
                ans = num2 + num1;
                break;
            case '-': 
                ans = num2 - num1;
                break;
            case '*':
                ans = num2 * num1;
                break;
            case '/':
                ans = num2 / num1;
                break;
        }
        return ans;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &token : tokens){
            if(isOperator(token)){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                int res = calculate(num2, token[0], num1);
                st.push(res);
            }
            else st.push(toDigit(token));
        }
        return st.top();
    }
};