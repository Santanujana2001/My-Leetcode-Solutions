class MyStack {
    stack<int>q;
public:
    
    
    void push(int x) {
        q.push(x);
    }
    
    int top() {
        return q.top();
    }
    int pop() {
        int n = q.top();
        q.pop();
        return n;
    }
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */