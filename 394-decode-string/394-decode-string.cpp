class Solution {
public:
    string solve(string &s,int &i)
    {
        string res="";
        while(i<s.size() and s[i]!=']' )
        {
           if(!isdigit(s[i]))
           {
               res+=s[i++];
           }
            else
            {
                int n=0;
                while(i<s.size() and isdigit(s[i]))
                    n=n*10+(s[i++]-'0');
                i++;// '['
                string t=solve(s,i);
                i++;//']'
                while(n-->0)
                    res+=t;
            }
        }
        return res;
        
    }
    string decodeString(string s) {
        int i=0;
          return solve(s,i);
        
//         stack<int>st;
//         string ans="";
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]==']')
//             {
//                 string t=s.substr(st.top(),i-st.top());
//                 int x=s[st.top()-2]-'0';
//                 st.pop();
               
                
//             }
//             else if(s[i]=='[')
//             {
//                st.push(i+1);
                
//             }
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
    }
};