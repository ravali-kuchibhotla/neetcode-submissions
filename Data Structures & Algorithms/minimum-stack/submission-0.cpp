class MinStack {
public:
    stack<int>s;
    stack<int>as;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(as.empty()==true || as.top()>=s.top())
          as.push(val);
    }
    
    void pop() {
        if(as.empty()==false and s.top()==as.top())
          as.pop();
        s.pop();
    }
    
    int top() {
        int x=s.top();
        return x;
    }
    
    int getMin() {
        return as.top();
    }
};
