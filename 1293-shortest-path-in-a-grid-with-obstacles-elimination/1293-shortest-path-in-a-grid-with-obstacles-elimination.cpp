class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),-1));
        queue<vector<int>>q;
        // queue store (x,y,current length path,number of obsticle still left)
        q.push({0,0,0,k});
        while(!q.empty())
        {
            auto t=q.front();
            q.pop();
            int x=t[0],y=t[1];
            
            // check x,y are valid or not
            if(x<0 or y<0 or x>=grid.size() or y>=grid[0].size())continue;
            
            // final destination
            if(x==grid.size()-1 and y==grid[0].size()-1)return t[2];
            
            // obstacles found
            if(grid[x][y]==1)
            {
                if(t[3]>0)t[3]--;   //number of obstacles still can remove
                else
                    continue;
            }
            if(vis[x][y]!=-1 and vis[x][y]>=t[3])
                 continue;
            vis[x][y]=t[3];
            q.push({x+1,y,t[2]+1,t[3]});
            q.push({x,y+1,t[2]+1,t[3]});
            q.push({x-1,y,t[2]+1,t[3]});
            q.push({x,y-1,t[2]+1,t[3]});
        }
        return -1;
        
    }
};