class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (mp.count(temp)) {
                return {i, mp[temp]};
            }
            mp[nums[i]] = i;
        }
        return {-1, -1};
    }
};