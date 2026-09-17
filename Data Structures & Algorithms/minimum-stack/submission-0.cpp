class MinStack {
public:
    stack<int> st;
    stack<int> temp;

    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(temp.empty() || val<=temp.top()){
            temp.push(val);
        }
    }
    
    void pop() {
        if(!st.empty()){
            if(st.top()==temp.top()){
                temp.pop();
            }
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        if(!st.empty()) return temp.top();
        return -1;
    }
};
