class Solution {
public:
    int climbStairs(int n) {
        if(n==1 or n==0 or n==2)return n;
        // vector<int>dp(n,0);
        // dp[0]=1;
        // dp[1]=2;
        int a=1,b=2;
        for(int i=2;i<n;i++)
        {
        int    c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};