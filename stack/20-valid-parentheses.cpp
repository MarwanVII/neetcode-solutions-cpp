class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s)
        {
            if(i == '(' || i == '{' || i == '[' || st.empty())
                st.push(i);
            else
            {
                if(i == ')' && st.top() == '(')
                    st.pop();
                else if(i == '}' && st.top() == '{')
                    st.pop();
                else if(i == ']' && st.top() == '[')
                    st.pop();
                else
                    st.push(i);
            }
        }
        return st.empty();
    }
};
