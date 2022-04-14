// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left_min = INT_MAX;             // Value at buy
        int max_profit = 0;                 // profit at sell
        for(int i = 0; i < prices.size(); i++){
            left_min = min(left_min, prices[i]);
            max_profit = max(max_profit, prices[i] - left_min);
        }
        return max_profit;
    }
};