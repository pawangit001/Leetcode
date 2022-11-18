class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)return false;
        if(n==1)return true;
        if(n<=6)return true;
        vector<int>fact={2,3,5};
        for(auto i:fact)
        {
            int t=n;
           while(t%i==0)
               t/=i;
               n=t;
        }
        return n==1;
    }
};