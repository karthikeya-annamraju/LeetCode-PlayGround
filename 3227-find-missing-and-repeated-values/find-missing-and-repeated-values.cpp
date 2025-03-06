class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int>mp;
        int repeated = 0;
        for (auto i: grid) {
            for (auto j: i) {
                mp[j]++;
                if (mp[j] == 2) repeated = j;
            }
        }
        // for (auto it = mp.begin(); it != mp.end(); it++) {
        //     if (it->second == 2) {
        //         repeated = it->first;
        //         break;
        //     }
        // }
        int n = grid.size();
        int sum = 0;
        int actualSum = ((n*n)*((n*n)+1))/2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum+=grid[i][j];
            }
        }
        return {repeated, actualSum-sum+repeated};
    }
};