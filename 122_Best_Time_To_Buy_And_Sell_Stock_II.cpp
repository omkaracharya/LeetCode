class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int max_profit = 0;
        // int min_val = INT_MAX;
        // for (int i = 0; i < prices.size(); ++i) {
        //     min_val = min(min_val, prices[i]);
        //     if (i != prices.size() - 1 && prices[i] >= prices[i + 1]) {
        //         max_profit += prices[i] - min_val;
        //         min_val = INT_MAX;
        //     } else if (i == prices.size() - 1 && prices[i - 1] < prices[i]) {
        //         max_profit += prices[i] - min_val;
        //         min_val = INT_MAX;
        //     }
        // }
        // return max_profit;
        
        int max_profit = 0;
        for (int i = 1; i < prices.size(); ++i)
            max_profit += max(0, prices[i] - prices[i - 1]);
        return max_profit;
    }
};