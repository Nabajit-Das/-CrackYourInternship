class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit=0;
        int profit=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[i-1]){
                totalProfit+=profit;
                profit=0;
                buy=prices[i];
            }
            else{
                profit=max(profit,(prices[i]-buy));
            }
        }
        totalProfit+=profit;
        return totalProfit;
    }
};