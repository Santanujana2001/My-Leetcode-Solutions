class Solution {
public:
    int solve(int i,int j,vector<vector<int>> &matrix,vector<vector<int>>&dp){
    if(j<0||j>=matrix[0].size()){
        return 1e9;
    }
    if(i==0){
        return matrix[i][j];
    } 
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up = matrix[i][j] + solve(i-1,j,matrix,dp);
    int leftdg = matrix[i][j] + solve(i-1,j-1,matrix,dp);
    int rightdg = matrix[i][j] + solve(i-1,j+1,matrix,dp);
    return dp[i][j]=min(up,min(leftdg,rightdg));
}
int minFallingPathSum(vector<vector<int>> &matrix)
{
     int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    int mini=1e9;
    for(int i=0;i<m;i++){
        mini=min(mini,solve(n-1,i,matrix,dp));
    }
    return mini;
}
};