class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>dups;
        for (auto i: nums) {
            if (mp[i] == 1) {
                dups.push_back(i);
            }
            else{
                mp[i]++;
            }
        }
        return dups;
    }
};