class MinStack {
private:
    stack<int> stk;
    stack<int> min_stack;
public:
    MinStack() { }
    
    void push(int val) {
        stk.push(val);
        if (!min_stack.empty()) {
            val = val < min_stack.top() ? val : min_stack.top();
            min_stack.push(val);
        } else min_stack.push(val);
    }
    
    void pop() { 
        stk.pop();
        min_stack.pop();
    }
    
    int top() { return stk.top(); }
    
    int getMin() { return min_stack.top(); }
};
