class Solution {
public:
//     aditya verma's lecture 43 on dp
    int solve(int egg,int floor,vector<vector<int>>&dp){
        if(floor==0||floor==1||egg==1){
            return floor;
        }
        if(dp[egg][floor]!=-1){
            return dp[egg][floor];
        }
        int mini=INT_MAX;
        for(int k=1;k<=floor;k++){
            int attempt = 1 + max(solve(egg-1,k-1,dp),solve(egg,floor-k,dp));
            mini=min(mini,attempt);
        }
        return dp[egg][floor]=mini;
    }
    int twoEggDrop(int n) {
        vector<vector<int>>dp(3,vector<int>(n+1,-1));
       return solve(2,n,dp);
    }
};