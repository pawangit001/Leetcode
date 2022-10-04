class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>s,g;
        for(auto i:secret)s[i]++;
        for(auto i:guess)g[i]++;
        int f=0;
        for(int i=0;i<min(secret.size(),guess.size());i++)
        {
            if(secret[i]==guess[i])
            {
                f++;
                if(s[secret[i]]>1)s[secret[i]]--;
                else
                    s.erase(secret[i]);
                if(g[guess[i]]>1)g[guess[i]]--;
                else
                    g.erase(guess[i]);
                
            }
        }
        int cnt=0;
        for(auto i:s)
        {
            if(g.find(i.first)!=g.end())
            {
                cnt+=min(i.second,g[i.first]);
                g.erase(i.first);
            }
        }
        string ans="";
        ans+=to_string(f)+"A"+to_string(cnt)+"B";
       // if(f==0)
        return ans;
        
    }
};