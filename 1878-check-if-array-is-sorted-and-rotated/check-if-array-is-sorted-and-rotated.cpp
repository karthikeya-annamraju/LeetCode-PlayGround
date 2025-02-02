class Solution {
public:
    bool check(vector<int>& nums) {
        int rotate = 0;
        int n = nums.size();
        for (int i = 0; i < n-1; i++) {
            if (nums[i] > nums[i+1]){
                rotate++;
            }
        }
        if (rotate == 1 && nums[0] >= nums[n-1])return true;
        if (rotate == 0 && nums[0] <= nums[n-1])return true;
        return false;
    }
};