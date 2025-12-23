class MinStack {
    stack<long long> st;
    long long mini = 0;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        } else if(val < mini) {
            st.push(2LL*val - mini); 
            mini = val;
        }
        else{
            st.push(val);
        }
    }

    void pop() {
        if(st.top() < mini) mini = 2 * mini - st.top();
        st.pop();
    }

    int top() { return st.top() < mini ? mini : st.top(); }

    int getMin() { return (int)mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */