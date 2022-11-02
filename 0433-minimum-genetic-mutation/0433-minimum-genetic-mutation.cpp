class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        queue<string>q;
        unordered_map<string,bool>vis;
        q.push(start);
        vis[start]=true;
        int step=0;
        while(!q.empty())
        {
            for(int i=q.size();i>0;i--)
            {
                string s=q.front();
                if(s==end)return step;
                q.pop();
                for(int j=0;j<8;j++)
                {
                    char och=s[j];
                    for(int k=0;k<4;k++)
                    {
                        s[j]="ACGT"[k];
                        if(!vis[s] and find(bank.begin(),bank.end(),s)!=bank.end())
                        {
                            q.push(s);
                            vis[s]=true;
                        }
                        
                    }
                    s[j]=och;
                }
            }
            step++;
            
        }
        return -1;
    }
};