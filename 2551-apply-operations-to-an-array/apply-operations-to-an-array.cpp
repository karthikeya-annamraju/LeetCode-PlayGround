class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n, 0); 
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != 0) {
                if (nums[i] == nums[i + 1]) {
                    vec[count] = nums[i] * 2; 
                    nums[i + 1] = 0;
                    i++; 
                } else {
                    vec[count] = nums[i]; 
                }
                count++;
            }
        }
        if (nums[n - 1] != 0) {
            vec[count++] = nums[n - 1];
        }
        return vec;
    }
};