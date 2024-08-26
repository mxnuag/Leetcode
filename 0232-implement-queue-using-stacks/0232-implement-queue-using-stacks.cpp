class MyQueue {
public:
    
    stack<int> inpt;
    stack<int> otpt;
    int peekel=-1;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        if(inpt.empty()){
            peekel=x;
        }
        inpt.push(x);
    }
    
    int pop() {
        if(otpt.empty()){
            while(!inpt.empty()){
                otpt.push(inpt.top());
                inpt.pop();
            }
        }
        int val=otpt.top();
        otpt.pop();
        return val;
    }
    
    int peek() {
        if(otpt.empty()){
            return peekel;
        }
        return otpt.top();
    }
    
    bool empty() {
        if(inpt.empty() && otpt.empty()){
            return true;
        }
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