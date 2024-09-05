class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        bool flag = true;
        for (int i = 0; i < s.size(); i++) {
            if (!st.empty() && isdigit(s[i])) {
                st.pop();
                flag = false;
            }
            else {
                st.push(s[i]);
            }
        }
        if (flag)return s;
        string ans = "";
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};