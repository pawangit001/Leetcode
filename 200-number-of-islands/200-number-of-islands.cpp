class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j)
    {
        int m=grid.size(),n=grid[0].size();
        if(i<0 or j<0 or i>=m or j>=n or grid[i][j] == '0')return ;
        
        grid[i][j]='0';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
       int compo=0;
        vector<char>vis(m*n,false);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    compo++;
                }
            }
            }
        return compo;

    }
};