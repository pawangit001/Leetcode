class Solution {
public:
    vector<int>dx={0,1,0,-1,0,0,0,0};
   
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
     //  vector<vector<int>>adj[];
        
        int r=image.size();
        int c=image[0].size();
        // for(int i=0;i<r;i++)
        // {
        //     for(int j=0;j<c;j++)
        //     {
        //         if(image[i][j])
        //         {adj[i].push_back(j);adj[j].push_back(i);}
        //     }
        // }
        vector<vector<int>>vis(r,vector<int>(c,false));
        vis[sr][sc]=true;
        queue<pair<int,int>>q;
         pair<int,int>p={sr,sc};
        int old=image[sr][sc];
       // image[p.first][p.second]=color;
        q.push(p);
while(!q.empty())
{
    auto t=q.front();
    q.pop();
  int i=t.first;
    int j=t.second;
   // int old=image[t.first][t.second];
    if(i-1>=0 and image[i-1][j]==image[i][j] and !vis[i-1][j])
    {
        vis[i-1][j]=true;
        q.push({i-1,j});
    }
    if(i+1<r and image[i+1][j]==image[i][j] and !vis[i+1][j])
    {
         vis[i+1][j]=true;
        q.push({i+1,j});
    }
    if(j-1>=0 and image[i][j-1]==image[i][j] and !vis[i][j-1])
    {
         vis[i][j-1]=true;
        q.push({i,j-1});
    }
    if(j+1<c and image[i][j+1]==image[i][j] and !vis[i][j+1])
    {
         vis[i][j+1]=true;
        q.push({i,j+1});
    }
     image[i][j]=color;
    
}
        return image;
        
    }
};