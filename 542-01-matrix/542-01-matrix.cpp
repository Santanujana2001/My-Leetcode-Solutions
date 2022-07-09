class Solution {
public:
    vector<int> dx ={0,0,1,-1};
    vector<int> dy ={1,-1,0,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size() , m=mat[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    dp[i][j]=0;
                }
            }
        }
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int newX = x+dx[i];
                int newY = y+dy[i];
                
                if(newX>=0 && newY>=0 && newX<n && newY<m && dp[newX][newY]==-1 )
                {
                    if(mat[newX][newY]==0)
                     dp[newX][newY]=0;
                    else
                    {
                        dp[newX][newY]=1+dp[x][y];
                        q.push({newX,newY});
                    } 
                }
            }
        }
        return dp;
    }
};