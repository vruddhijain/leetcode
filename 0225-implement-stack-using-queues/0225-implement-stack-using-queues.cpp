class MyStack {
public:
    queue <int> x;
        queue <int> y;
    MyStack() {
        
    }
    
    void push(int b) {
         while (!x.empty()) {
            y.push(x.front());
            x.pop();
        }
        x.push(b);
        while(!y.empty()) {
            x.push(y.front());
            y.pop();
        }
    }
    
    int pop() {
        int p = x.front();
        x.pop();
        return p;
    }
    
    int top() {
        return x.front();
    }
    
    bool empty() {
        return x.empty();
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