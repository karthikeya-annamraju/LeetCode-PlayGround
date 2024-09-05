class Solution {
public:
    string reversePrefix(string word, char ch) {
        int firstOc = 0;
        stack<char>st;
        string ans = "";
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                firstOc = i;
                st.push(word[i]);
                break;
            }
            st.push(word[i]);
        }
        // cout << firstOc;
        if (firstOc == 0)return word;
        string rem = "";
        for (int i = firstOc+1; i < word.size(); i++) {
            rem+=word[i];
        }
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        ans = ans+rem;
        return ans;
    }
};