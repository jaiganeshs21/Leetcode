class MyQueue {
public:
    stack<int> s, temp;
    // Initialize two stacks
    // ('s') is the main stack
    
    MyQueue() {
        
    }
    
    void push(int x) {
        // Move all elements from (s) to (temp)
        while(!s.empty()){
            temp.push(s.top());
            s.pop();
        }
        // push the value we want to store in Queue i.e.. x
        temp.push(x);
        
        // Now move all elements to (s) again (Same as Queue)
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
        // these are basic operations
        int t = s.top();
        s.pop();
        return t;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return (s.empty());
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