class MyQueue {
    queue<int> q;
public:    
    void push(int x) {
        q.push(x);
        int l=q.size();
        while(l--){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int a=q.front();
        q.pop();
        return a;
    }
    
    int peek() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */