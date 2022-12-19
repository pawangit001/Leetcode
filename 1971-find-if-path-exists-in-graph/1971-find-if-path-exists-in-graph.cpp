class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
       
        vector<int>vis(n,false);
        unordered_map<int,vector<int>>adj;

        for(auto edg:edges)
        {
            int i=edg[0],j=edg[1];
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
        queue<int>q;
        if(source==destination)return true;
        
        q.push(source);
        vis[source]=true;
        while(!q.empty())
        {
            int  sr= q.front();
            q.pop();
            if(sr==destination)return true;
            for(auto i:adj[sr])
            {
                if(!vis[i])
                {
                    vis[i]=true;
                    q.push(i);
                    
                }
            }
           
        }
        return false;
    }
};