class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrices=prices[0];
        int maxProfit=0;

        for(int i=1; i<prices.size();i++)
        {
            minPrices=min(minPrices,prices[i]);
            int Profit= prices[i]-minPrices;
            maxProfit=max(maxProfit,Profit);

        }
        return maxProfit;
        
    }
};