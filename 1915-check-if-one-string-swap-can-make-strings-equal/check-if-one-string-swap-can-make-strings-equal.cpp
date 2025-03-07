class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.size() != s2.size()) return false;
        if (s1 == s2) return true;
        vector<int>indices;
        int cnt = 0;
        for (int i = 0; i < s2.size(); i++) {
            if (s1[i] != s2[i]) {
                indices.push_back(i);
                cnt++;
            }
        }
        if (cnt != 2) return false;
        swap(s2[indices[0]], s2[indices[1]]);
        return s1 == s2;
    }
};