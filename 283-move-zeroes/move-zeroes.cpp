class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // this variable keeps track of the left most zero element that can be swapped with a non zero
        int j = 0;
        // whenever we encounter a non-zero, we just swap it with the left most zero in the array in place
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};