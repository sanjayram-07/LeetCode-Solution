class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mins =prices.at(0);
        
        int maxs =0 ;
      
        for(int i=0; i < n ; i++)
        {
            if(prices[i]<mins){
            mins =prices[i];
            }
            else
            {
                int profit = prices[i]-mins;
                maxs = max(profit , maxs);
            }
        }
          
       return maxs;
        
    }
};