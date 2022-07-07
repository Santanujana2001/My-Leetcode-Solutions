class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m,n,fresh=0,emp=0;
        m = grid.size();
        n = grid[0].size();
        int mn=-1;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
                if(grid[i][j]==0){
                    emp++;
                }  
            }
        }
        if(emp==m*n || fresh==0) return 0;
        if(fresh == m*n) return -1;
        pair<int,int>dirs[4] = {{0,1},{1,0},{0,-1},{-1,0}};
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                pair<int,int>p = q.front();
                q.pop();
                for(auto x:dirs){
                    int dx = p.first + x.first;
                    int dy = p.second + x.second;
                    while(dx>=0 && dy>=0 && dx < m && dy < n && grid[dx][dy]==1){
                        grid[dx][dy]=2;
                        q.push({dx,dy});
                        fresh--;
                    }
                }
            }
            mn++;
        }
        
        if(fresh>0) return -1;
        if(mn==-1) return 0;
        return mn;
    }
};