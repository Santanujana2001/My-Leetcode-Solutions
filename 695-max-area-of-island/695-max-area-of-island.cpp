class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i==grid.size() || j<0 || j==grid[i].size() || grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0;
        int c=1;
        c+=dfs(grid,i+1,j);
        c+=dfs(grid,i,j+1);
        c+=dfs(grid,i-1,j);
        c+=dfs(grid,i,j-1);
        return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                maxi=max(maxi,dfs(grid,i,j));
            }
        }
        return maxi;
    }
};