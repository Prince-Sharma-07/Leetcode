class MinStack {
    stack<pair<int,int>> st;
    int mini = INT_MAX;
public:

    MinStack() {
        
    }
    
    void push(int val) {
        mini = min(val, mini);
        st.push({val,mini});
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
            if(!st.empty()) mini = st.top().second;
            else mini = INT_MAX;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top().first;
    }
    
    int getMin() {
        if(st.empty()) return -1;
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */