class MinStack {
public:
    stack<int> st;
    stack<int> minimal;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (!minimal.empty()) val = std::min(val, minimal.empty() ? val : minimal.top());
        minimal.push(val);
    }
    
    void pop() {
        st.pop();
        minimal.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minimal.top();
    }
};
