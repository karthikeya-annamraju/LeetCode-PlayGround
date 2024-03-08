class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max = 0;
        unordered_map<int, int>mp;
        for(auto i : nums) {
            mp[i]++;
            if (mp[i] > max)
                max = mp[i];
        }
        int count = 0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second == max) {
                count+=it->second;
            }
        }
        return count;
    }
};