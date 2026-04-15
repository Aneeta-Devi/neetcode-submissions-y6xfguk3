class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int Best_buy[n];
      Best_buy[0]=prices[0];
      for(int i=1;i<n;i++){
       Best_buy[i]=min(Best_buy[i-1],prices[i-1]);
      }
      int maxprofit=0;
      for(int i=0;i<n;i++){
        int currProfit=prices[i]-Best_buy[i];
        maxprofit=max(maxprofit,currProfit);
      }
      return maxprofit;
    }
};
