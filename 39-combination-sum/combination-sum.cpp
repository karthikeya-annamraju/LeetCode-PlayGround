class Solution {
public:
    void rec(vector<int>&nums, int nxt, vector<int>& soln, int target, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(soln);
            return;
        }
        if (nxt == nums.size() or target-nums[nxt]<0) {
            return;
        }

        soln.push_back(nums[nxt]);
        rec(nums, nxt, soln, target-nums[nxt], res);
        soln.pop_back();
        rec(nums, nxt+1, soln, target, res);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        vector<int>soln;
        rec(candidates, 0, soln, target, res);
        return res;
    }
};