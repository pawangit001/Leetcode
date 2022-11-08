class Solution {
public:
    string makeGood(string st) {
        stack<char>s;
        s.push(st[0]);
        for(int i=1;i<st.size();i++)
        {
            
            if(!s.empty() )
            {
                char x=s.top();
            if(islower(x))
                x=toupper(x);
            else
                x=tolower(x);
            if(x==st[i])
                 s.pop();
                else
                    s.push(st[i]);
            }
            else
               s.push(st[i]);
        }
               string res="";
                if(s.empty())return "";
               while(!s.empty())
               {
                   res+=s.top();
                   s.pop();
               }
        reverse(res.begin(),res.end());

               return res;
    }
};