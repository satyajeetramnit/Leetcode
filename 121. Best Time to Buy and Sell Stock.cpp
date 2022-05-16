class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = prices[0], size = prices.size(), i;
        
        for(i = 1; i < size; i++) {
            profit = max(profit, prices[i] - buy);
            buy = min(buy, prices[i]);
        }
        
        return profit;
    }
};