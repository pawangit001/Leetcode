class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        int n=paths.size();
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        int check=0;
        for(int i=0;i<n;i++)
        {
               string s=paths[i];
               string t="";
              int j=0;
              int sz=s.size();
              string space="";
            while(j<sz)
            {
                if(s[j]=='(')
                {
                    string temp=" ";
                   
                   temp= t +space +".txt" ;
                       
                       string content="";
                    j++;

                    while(s[j]!=')')
                    {
                        content+=s[j];j++;
                    }
                   
                    m[content].push_back(temp);
                    j+=1;
                   space="";
                   continue;
                }
                else if(s[j] ==' '){
                     space="";
                    space+='/';j++;
                    while(s[j]!='.')
                        space+=s[j++];
                    
                    
                    j+=4;
                    continue;}
                  
                else
                    t+=s[j];
                
                j++;
            }
        
        }
        int f=0;
        for(auto i:m)
        {
            if(i.second.size()>1)
            {  f=1;
             ans.push_back(i.second);
            }
        }
    
        return ans;
    }
};