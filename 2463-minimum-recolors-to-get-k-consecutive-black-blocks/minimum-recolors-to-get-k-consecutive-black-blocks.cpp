class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt = INT_MAX;
        int n = blocks.size();
        for (int i = 0; i < n-k+1; i++) {
            int curr_cnt = 0;
            for (int j = i; j < i+k; j++) {
                if (blocks[j] == 'W') curr_cnt++;
            }
            cnt = min(curr_cnt, cnt);
        }
        return cnt;
    }
};