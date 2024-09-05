class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>stt;
        string a = "";
        string b = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) {
                    continue;
                }
                else{
                    st.pop();
                    }
            }
        }
        // 2nd stack
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != '#') {
                stt.push(t[i]);
            }
            else {
                if (stt.empty()) {
                    continue;
                }
                else{
                    stt.pop();
                    }
            }
        }

        // while(!st.empty() and !stt.empty()) {
        //     char a = st.top();
        //     char b = stt.top();
        //     if (a != b) return false;
        //     st.pop();
        //     stt.pop();
        // }
        // return true;

        while(!st.empty()) {
            int top = st.top();
            a+=(top);
            st.pop();
        }

        while(!stt.empty()) {
            int top = stt.top();
            b+=(top);
            stt.pop();
        }
        cout << a << " " << b;
        return a == b;

    }
};