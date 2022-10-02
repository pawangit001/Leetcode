class Solution {
public:
    const int mod=1e9+7;
    int dp[31][1001];
   
    int solve(int n,int k,int t)
    {
        if(n==0 or t<=0)return n==t;
        if(dp[n][t]!=-1)return dp[n][t];
         int res=0;
        for(int i=1;i<=k;i++)
        res=(res+solve(n-1,k,t-i))%mod;
         dp[n][t]= res;
        return res;
    }
    int numRollsToTarget(int n, int k, int target) {
       // int res=0;
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
    }
};