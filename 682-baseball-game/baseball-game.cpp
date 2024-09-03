class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int res = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] != "C" and operations[i] != "D" and operations[i] != "+") {
                st.push(stoi(operations[i]));
            }
            else if (operations[i] == "C") {
                st.pop();
            }
            else if (operations[i] == "D") {
                int top = st.top();
                st.push(top*2);
            }
            else if(operations[i] == "+") {
                int top = st.top();
                st.pop();
                int p = top+st.top();
                st.push(top);
                st.push(p);
            }
        }
        while (!st.empty()) {
            int top = st.top();
            res+=top;
            st.pop();
        }
        return res;
    }
};