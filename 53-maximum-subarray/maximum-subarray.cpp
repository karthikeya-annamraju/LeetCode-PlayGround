class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // KADANE'S ALGO
        int maxi = INT_MIN;
        int sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // calc sum
            sum+=nums[i];

            // compare maxi and sum
            maxi = max(maxi, sum);

            // reset sum
            if (sum < 0) sum = 0;
        }
        return maxi;
    }
};