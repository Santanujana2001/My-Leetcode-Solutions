class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==2){
            return min(cost[0],cost[1]);
        }
        vector<int>dp(n,0);
        dp[0]=cost[0];
        dp[1]=cost[1];
        int maxi=0;
        for(int i=2;i<cost.size();i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};