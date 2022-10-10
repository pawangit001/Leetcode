class Solution {
public:
    string breakPalindrome(string p) {
        int n=p.size();
        if(n==1)return "";
        
        int t=26;
        vector<int>ch(t,0);
        for(int i=0;i<n;i++) ch[p[i]-'a']++;
        if(p[0]!='a'){p[0]='a';return p;}
        for(int i=1;i<n;i++)
        {
           if(ch[p[i]-'a']%2==0 and p[i]!='a')
           {
               p[i]='a';return p;
           }
           
                
                
        }
       if(p[n-1]=='a')
       {
           p[n-1]='b';return p;
       }
        else
            return "";
    }
};