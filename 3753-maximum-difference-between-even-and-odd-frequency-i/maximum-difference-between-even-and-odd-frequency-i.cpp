class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int>mp;
        for (auto i: s) {
            mp[i]++;
        }

        // iterate thru map to find the max odd
        // and least even
        int max = INT_MIN;
        int min = INT_MAX;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second % 2 != 0 && it->second > max) {
                max = it->second;
            }
            if (it->second % 2 == 0 && it->second < min) {
                min = it->second;
            }
        }
        return max-min;
    }
};