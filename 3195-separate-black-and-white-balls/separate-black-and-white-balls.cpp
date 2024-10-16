class Solution {
public:
    long long minimumSteps(string s) {
        long long a = 0;
        long long b = 0;
        for (auto i : s) {
            if (i == '1') {
                a++;
            }
            else if (i == '0') {
                b+=a;
            }
        }
        return b;
    }
};