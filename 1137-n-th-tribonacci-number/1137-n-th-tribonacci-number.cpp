class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return n;
        if( n==1 or n==2)return 1;
        if(n==3)return 2;
        if(n==4)return 4;
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        dp[4]=4;
        for(int i=5;i<=n;i++)
        {
            dp[i]=dp[i-3]+dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};