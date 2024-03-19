class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        int days = prices.size();
        for(int i=1;i<days;i++) {
            if(buy < prices[i]) profit += prices[i] - buy;
            buy = prices[i];
        }
        return profit;
    }
};