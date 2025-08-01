class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n= prices.size();
        int mini = prices[0];
        int profit=0;
        for(int i=1;i<n;i++)
        {
            int cost = prices[i] - mini;
            profit = max(profit,cost);
            mini = min(mini,prices[i]);
        }
        return profit;
    }
};
