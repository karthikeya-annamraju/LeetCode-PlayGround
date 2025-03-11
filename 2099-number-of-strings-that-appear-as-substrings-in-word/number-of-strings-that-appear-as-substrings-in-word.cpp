class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_map<string, int>mp;
        int count = 0;
        for (int i = 0; i < word.size(); i++) {
            for (int j = i; j < word.size(); j++) {
                mp[word.substr(i, j-i+1)]++;
            }
        }
        for (auto i: patterns) {
            if (mp.count(i)) {
                count++;
            }
        }

        return count;
    }
};