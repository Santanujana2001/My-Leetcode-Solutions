class Solution
{
    public:
        int minFallingPathSum(vector<vector < int>> &matrix)
        {
            int n = matrix.size();
            int m = matrix[0].size();
            vector<vector < int>> dp(n, vector<int> (m, -1));
            for(int i=0;i<m;i++){
                dp[0][i]=matrix[0][i];
            }
            for(int i=1;i<n;i++){
                for(int j=0;j<m;j++){
                    int up=matrix[i][j]+dp[i-1][j];
                    int ldg=1e9,rdg=1e9;
                    if(j>0){
                        ldg=matrix[i][j]+dp[i-1][j-1];
                    }
                    if(j<m-1){
                        rdg=matrix[i][j]+dp[i-1][j+1];
                    }
                    dp[i][j]=min(up,min(ldg,rdg));
                }
            }
            int mini=1e9;
            for(int i=0;i<m;i++){
                mini=min(mini,dp[n-1][i]);
            }
            return mini;
        }
};