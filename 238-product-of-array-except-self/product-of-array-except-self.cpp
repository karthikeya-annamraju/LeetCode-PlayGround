class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProd(n);
        vector<int> rightProd(n);
        
        // compute left prod
        leftProd[0] = 1;
        for (int i = 1; i < n; i++) {
            leftProd[i] = leftProd[i-1] * nums[i-1];
        }

        // compute right prod
        rightProd[n-1] = 1;
        for (int i = n-2; i > -1; i--) {
            rightProd[i] = rightProd[i+1] * nums[i+1];
        }

        // calc prod of both arrays
        vector<int>ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = leftProd[i] * rightProd[i];
        }

        return ans;
    }
};