class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            if(st.empty()) return false;
            else{
                char ch = st.top();
                if(s[i] == ')' && ch == '('
                || s[i] == '}' && ch == '{'
                || s[i] == ']' && ch == '['){
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};
