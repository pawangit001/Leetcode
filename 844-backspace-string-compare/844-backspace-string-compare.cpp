class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1,st2;
        for(auto i:s)
        {
           if(i!='#')st1.push(i);
            else
            {
                if(!st1.empty())
                    st1.pop();
            }
        }
        for(auto i:t)
        {
           if(i!='#')st2.push(i);
            else
            {
                if(!st2.empty())
                    st2.pop();
            }
        }
        if(st1.empty() and st2.empty())return true;
        else if(st1.empty() or st2.empty())return false;
        string ss="";
        string tt="";
        while(!st1.empty())
        {ss+=st1.top();st1.pop();}
        while(!st2.empty())
        {
            tt+=st2.top();
            st2.pop();
        }
        return ss==tt;
    }
};