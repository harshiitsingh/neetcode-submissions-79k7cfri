class MinStack {
private:
    stack<int>st;
    int mini;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            mini = val;
            st.push(0);
            return;
        }
        else {
            st.push(val - mini);
            if (val < mini) mini = val;
        }
    }
    
    void pop() {
        if(st.empty()) return;

        int pop = st.top();
        st.pop();

        if(pop<0) mini = mini - pop;
    }
    
    int top() {
        int top = st.top();
        return (top>0) ? (top+mini) : (int)mini;
    }
    
    int getMin() {
        return (int)mini;
    }
};
