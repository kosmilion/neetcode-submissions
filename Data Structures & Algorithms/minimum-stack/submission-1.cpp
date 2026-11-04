class MinStack {
private:
    vector<pair<int, int>> stack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(stack.empty()){
            stack.push_back({val, val});
            return;
        }

        int minVal = stack.back().second;
        minVal = min(minVal, val);
        stack.push_back({val, minVal});
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack.back().second;        
    }
};