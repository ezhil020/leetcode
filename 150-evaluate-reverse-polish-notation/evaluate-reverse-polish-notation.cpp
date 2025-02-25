class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        string ch;
        int a,b;

        for (int i = 0; i < tokens.size(); i++) {
            ch = tokens[i];

            if (ch == "+") {
               b =  st.top();
               st.pop();
               a = st.top();
               st.pop();
                st.push(a + b);
            } else if (ch == "-") {
                 b =  st.top();
               st.pop();
               a = st.top();
               st.pop();
                st.push(a - b);
            } else if (ch == "*") {
                 b =  st.top();
               st.pop();
               a = st.top();
               st.pop();
                st.push(a * b);
            } else if (ch == "/") {
                 b =  st.top();
               st.pop();
               a = st.top();
               st.pop();
                st.push(a / b);
            } else {
                st.push(stoi(ch));
            }
        }
        int val = st.top();
        return val;
    }
};