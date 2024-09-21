class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>v(n, "");
        for (int i = 1; i <= n; i++) {
            v[i-1] = to_string(i);
        }
        sort(v.begin(), v.end());
        vector<int>ans(n, 0);
        for(int i  = 0; i < v.size(); i++) {
            ans[i] = stoi(v[i]);
        }
        return ans;
    }
};