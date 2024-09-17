class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        istringstream iss(s1);
        istringstream isss(s2);
        unordered_map<string, int>mp;
        string word;
        while (iss >> word) {
            mp[word]++;
        }
        string words;
        while (isss >> words) {
            mp[words]++;
        }
        for (auto it = mp.begin(); it!=mp.end(); it++) {
            if (it->second == 1) {
                ans.push_back(it->first);
            }
            //cout << it->first << " " << it->second << endl;
        }
        return ans;
    }
};