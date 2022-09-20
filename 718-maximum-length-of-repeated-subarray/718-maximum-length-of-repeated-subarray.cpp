class Solution {
public:
    int ans=0;
//     int dp[1001][1001];
//     int solve(vector<int>&s1,vector<int>&s2,int n,int m)
//     {
//         if(n==0 or m==0)return 0;
//         if(dp[n][m]!=-1)return dp[n][m];
//         if(s1[n-1]==s2[m-1])
//         {
//              dp[n][m]= 1+ solve(s1,s2,n-1,m-1);
//             ans=max(ans,dp[n][m]);
//             return dp[n][m];
//         }
//         else
//         {dp[n][m] = max(solve(s1,s2,n,m-1),solve(s1,s2,n-1,m));
         
//           ans=max(ans,dp[n][m]);
//          return dp[n][m];}
//     }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        // memset(dp,-1,sizeof(dp));
         int n=nums1.size(),m=nums2.size();
        // int x= solve(nums1,nums2,n,m);
        // return ans;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(nums1[i]==nums2[j])
                  {  dp[i][j]=1+dp[i+1][j+1];
                   ans=max(ans,dp[i][j]);
                  }
            }
        }
        return ans;
    }
};