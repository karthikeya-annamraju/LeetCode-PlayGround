class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        
        unordered_map<string,int>mp;
        for (auto i: bannedWords) {
            mp[i]++;
        }
        int count = 0;
        for (auto k: message) {
            if (mp[k] > 0)count++;
        }
        if (count > 1)return true;
        return false;
    }
};