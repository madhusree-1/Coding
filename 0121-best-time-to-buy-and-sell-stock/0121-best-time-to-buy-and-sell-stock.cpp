class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // bettter to use kadanae  algorithm
        // track an array to find diffference bewtween two concsectives 
        // we will maximum subarray sum and that would be the maximum profit
        if(prices.size()<=1) return 0;
        vector<int>priceDiff;
        for(int  i=0;i<prices.size()-1;i++){
            int diff = prices[i+1] - prices[i];
            priceDiff.push_back(diff);
        }
        int flag = priceDiff[0],maxsum = priceDiff[0];
        for(int i=1;i<priceDiff.size();i++){
            flag = max(priceDiff[i],flag+priceDiff[i]);
            maxsum = max(maxsum,flag);
        }
        if(maxsum > 0 ) return maxsum;
        else return 0;
    }
};