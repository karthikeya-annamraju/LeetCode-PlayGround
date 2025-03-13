class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>v;
        for (auto i: nums) {
            mp[i]++;
            if (mp[i] > 1) v.push_back(i);
        }
        return v;
    }
};