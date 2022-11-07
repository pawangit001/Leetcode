class Solution {
public:
    int maximum69Number (int num) {
        int n=log(10+num)+1;
        int x=num;
        string res=to_string(num);
        for(int i=0;i<res.size();i++)
        {
            if(res[i]=='6')
            {
                res[i]='9';
                x=max(x,stoi(res));
                res[i]='6';
            }
        }
        return x;
    }
};