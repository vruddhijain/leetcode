class MinStack {
public:
    stack<int> s;
    vector<int> v;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        v.push_back(val);
        
        
        
    }
    
    void pop() {
        int p = s.top();
        s.pop();
        auto it = std::find(v.begin(), v.end(),
                        p);
if (it != v.end()) {
        v.erase(it);
    }

        
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        sort(v.begin(), v.end());
        return v[0];
        
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