class Solution
{
    public:
        int minFallingPathSum(vector<vector < int>> &matrix)
        {   
        
            int n = matrix.size();
            int m = matrix[0].size();
            vector<int> prev(m,0), cur(m,0);
            for(int i=0;i<m;i++){
                prev[i]=matrix[0][i];
            }
            for(int i=1;i<n;i++){
                for(int j=0;j<m;j++){
                    int up=matrix[i][j]+prev[j];
                    int ldg=1e9,rdg=1e9;
                    if(j>0){
                        ldg=matrix[i][j]+prev[j-1];
                    }
                    if(j<m-1){
                        rdg=matrix[i][j]+prev[j+1];
                    }
                    cur[j]=min(up,min(ldg,rdg));
                }
                prev=cur;
            }
            int mini=1e9;
            for(int i=0;i<m;i++){
                mini=min(mini,prev[i]);
            }
            return mini;
        }
};