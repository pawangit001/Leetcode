class Solution {
public:
    int solve(vector<int>&cost,int w,int n,vector<vector<int>>&dp)
    {
        if(w==0 or n==0 )return 0;
        if(dp[w][n]!=-1)return dp[w][n];
        if(cost[n-1]<=w)
            return dp[w][n]= max(1+solve(cost,w-cost[n-1],n-1,dp),solve(cost,w,n-1,dp));
        else
            return dp[w][n] = solve(cost,w,n-1,dp);
    }
    int maxIceCream(vector<int>& costs, int coins) {
       //  vector<vector<long long>>dp(coins+1,vector<long long>(costs.size()+1));
       //  //return solve(costs,coins,costs.size(),dp);
       // long long int n=costs.size();
       //  for(int i=0;i<=coins;i++)
       //    dp[i][0]=0;
       //  for(int i=0;i<=n;i++)
       //      dp[0][i]=0;
       //  for(int i=1;i<=coins;i++)
       //  {
       //      for(int j=1;j<=n;j++)
       //      {
       //           if(costs[j-1]<=i)
       //              dp[i][j]= max(1+dp[i-costs[j-1]][j-1],dp[i][j-1]);
       //        else
       //              dp[i][j] = dp[i][j-1];
       //      }
       //  }
       //  return dp[coins][n];
        sort(costs.begin(),costs.end());
        int count=0,n=costs.size();
        for(int i=0;i<n;i++)
        {
            if(count<n and costs[i]<=coins)
            {
                coins-=costs[i];
                count++;
            }
        }
        return count;
    }
};