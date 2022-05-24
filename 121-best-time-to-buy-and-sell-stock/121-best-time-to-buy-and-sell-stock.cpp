class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,profit=0;
        for(auto i:prices){
            mini=min(mini,i);
            profit=max(profit,i-mini);
        }
        return profit;
    }
};