class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>v;
        for (auto i: nums) {
            mp[i]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == 2) {
                v.push_back(it->first);
            }
        }
        return v;
    }
};