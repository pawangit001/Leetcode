class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        string w,ans="";
        while(ss>>w)
            ans=w+" "+ans;
        ans.pop_back();
        return ans;
        
        
        
    //     int j=0,i,k=s.size()-1;
    //     while(s[j]==' '){j++;}
    //     while(s[k]==' '){k--;}
    //     string ans="";
    //     string t="";
    //     for( i=j;i<k+1;i++)
    //     {
    //         if(s[i]==' ' and s[i+1]!=' ' )
    //         {
    //            t=s.substr(j,i-j);
    //             reverse(t.begin(),t.end());
    //             ans+=" "+t;
    //             j=i+1;
    //         }
    //     }
    //     t=s.substr(j,i-j);
    //     reverse(t.begin(),t.end());
    // // 
    //     ans+=" "+t;
    //     reverse(ans.begin(),ans.end());
    //     ans.pop_back();
    //     return ans;
    }
};