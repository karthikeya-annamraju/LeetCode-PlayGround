class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0;
        unordered_map<string, int>mp;
        unordered_map<string, int>mpp;
        for (auto word : words1) {
            mp[word]++;
        }
        for (auto words : words2) {
            mpp[words]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == 1 && mpp[it->first] == 1)count++;
        }
        return count;
    }
};