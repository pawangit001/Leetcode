class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int>s;
        vector<int>vis(rooms.size(),false);
        vis[0]=true;
        s.push(0);
        while(!s.empty())
        {
           // cout<<it<<" ";
            auto it=s.top();
            s.pop();
            // if(!vis[it])
            {
               // cout<<it;
               // vis[it]=true;
                for(auto i:rooms[it])
                   {    //cout<<i;
                       if(!vis[i])
                      {  // cout<<i;
                           vis[i]=true;
                           s.push(i); }
                   }
            }
        }
        for(int i=1;i<rooms.size();i++)if(!vis[i])return false;
        return true;
    }
};