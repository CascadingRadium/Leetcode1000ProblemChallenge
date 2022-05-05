class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int ret=0;
        while(!s1.empty())
        {
            ret=s1.top();
            s2.push(ret);
            s1.pop();
        }
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;
        
    }
    
    int peek() {
        int ret=0;
        while(!s1.empty())
        {
            ret=s1.top();
            s2.push(ret);
            s1.pop();
        }
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;
    }
    
    bool empty() {
        return s1.size()==0;
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