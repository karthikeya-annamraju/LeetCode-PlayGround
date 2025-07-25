class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        int n = prices.size();
        for (int i = 1; i < n; i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            }
            // the below cond execs only if curr buy < curr sell
            // calculate current profit and update to profit
            else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};