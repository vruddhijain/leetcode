class MyQueue {
public:
    stack <int> s;
    stack <int> t;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty()){
            int p = s.top();
            s.pop();
            t.push(p);
        }
        
        s.push(x);
        
        while(!t.empty()){
            int g = t.top();
            t.pop();
            s.push(g);
        }
        
    }
    
    int pop() {
        int y = s.top();
        s.pop();
        return y;
        
    }
    
    int peek() {
        
        return s.top();
    }
    
    bool empty() {
        if(s.empty()){return true;}
        return false;
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