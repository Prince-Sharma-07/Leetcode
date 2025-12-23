class MinStack {
    stack<pair<int, int>> st;
public:
    MinStack() {}

    void push(int val) { !st.empty() ? st.push({val, min(val, st.top().second)}) : st.push({val , val}); }

    void pop() { if(!st.empty()) st.pop(); }

    int top() { return !st.empty() ? st.top().first : -1; }

    int getMin() { return !st.empty() ? st.top().second : -1; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */