class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for (int i = 0; i <= chalk.size()-1; i++) {
            sum += chalk[i];
        }
        long long a = k%sum;
        for (int i = 0; i <= chalk.size()-1; i++) {
            if (a < chalk[i]) return i;
            else a -= chalk[i];
        }
        return 0;
    }
};