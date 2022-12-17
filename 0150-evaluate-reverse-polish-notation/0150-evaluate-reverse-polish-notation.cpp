class Solution {
public:
    bool isoperator(string op)
    {
             if(op=="+" or op=="-" or op=="/" or op=="*")
                 return true;
        else
            return false;
    }
    long long int cal(int a, int b,string op)
    {
        if(op=="+")return a+b;
        else if(op=="-")return b-a;
        else if(op=="/")return b/a;
        else 
            return a*1ll*b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<long long int>s;
        for(int i=0;i<tokens.size();i++)
        {
            if(isoperator(tokens[i]))
            {
                long long int a=s.top();
                s.pop();
             long long   int b=s.top();
                s.pop();
            long long    int t=cal(a,b,tokens[i]);
                s.push(t);
            }
            else
                s.push(stoi(tokens[i]));
        }
        return s.top();
    }
};