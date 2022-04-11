class Solution {
 public:
    int maxProfit(vector<int>& prices) {
       //  int mini=INT_MAX;
       //  int maxi=INT_MIN;
       //  int profit=0;
       // for(int i=0;i<prices.size();i++) {
       //     if(prices[i]<mini){
       //         mini=prices[i];
       //         maxi=prices[i];
       //     }
       //     else{
       //     mini=min(mini,prices[i]);
       //     maxi=max(maxi,prices[i]);
       //     }
       //     profit=max(profit,maxi-mini);
       // }
       //  return profit;
        //Another approach
        int l=0,r=1;
        int profit=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                profit=max(profit,prices[r]-prices[l]);
            }
            else l=r;
            r++;
        }
        return profit;
    }
};
