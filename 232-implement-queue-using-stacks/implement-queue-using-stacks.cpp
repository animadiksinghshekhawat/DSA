class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int el;
        if(s2.size()!=0){
            el=s2.top();
        }
        else{
            int s=s1.size();
            for(int i=0;i<s;i++){
                s2.push(s1.top());
                s1.pop();
            }
            el=s2.top();
        }
        s2.pop();
        return el;
    }
    
    int peek() {
        int el;
        if(s2.size()!=0){
            el=s2.top();
        }
        else{
            int s=s1.size();
            for(int i=0;i<s;i++){
                s2.push(s1.top());
                s1.pop();
            }
            el=s2.top();
        }
        return el;
        
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
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