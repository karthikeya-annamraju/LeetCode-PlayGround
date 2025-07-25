class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto i: s) {
            if (i == '(' or i == '[' or i == '{') {
                st.push(i);
            }
            if (i == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else if (st.empty() or st.top() != '(') return false;
            }

            if (i == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                }
                else if (st.empty() or st.top() != '[') return false;
            }

            if (i == '}') {
                if (!st.empty() && st.top() == '{') {
                    st.pop();
                }
                else if (st.empty() or st.top() != '{') return false;
            }
        }
        return (!st.empty()) ? false : true;
    }
};