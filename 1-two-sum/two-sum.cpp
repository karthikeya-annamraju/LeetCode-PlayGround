class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        int n = nums.size();
        for (int i = 0; i <= n; i++) {
            // calculate complement
            int complement = target - nums[i];
            // check if complement in mp
            if (mp.count(complement)) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        // if no such pair exists 
        return {-1, -1};
    }
};