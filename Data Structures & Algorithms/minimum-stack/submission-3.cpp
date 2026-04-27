class MinStack {
private:
    stack<long>st;
    long mini;
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

        long pop = st.top();
        st.pop();

        if(pop<0) mini = mini - pop;
    }
    
    int top() {
        long top = st.top();
        return (top>0) ? (top+mini) : (int)mini;
    }
    
    int getMin() {
        return (int)mini;
    }
};
