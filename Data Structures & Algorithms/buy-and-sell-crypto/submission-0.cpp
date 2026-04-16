class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int smallest=prices[0];
        for(int i=0; i<prices.size(); i++)
        {
            profit=max(profit, prices[i]-smallest);
            smallest=min(smallest, prices[i]);
        }
        if(profit<0)
           return 0;
        return profit;
    }
};
