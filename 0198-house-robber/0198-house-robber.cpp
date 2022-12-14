class Solution {
public:
    // int dp[101];
    // int solve(int n,vector<int>&nums)
    // {
    //     if(n<=0)return 0;
    //     if(dp[n]!=-1)return dp[n];
    //     return dp[n]= max(nums[n-1]+solve(n-2,nums),solve(n-1,nums));
    // }
    int rob(vector<int>& nums) {
//          memset(dp,-1,sizeof(dp));
//         return solve(nums.size(),nums);
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        vector<long long int>dp(n,0);
        dp[0]=nums[0];
        dp[1]= max(nums[0],nums[1]);
        if(n==2)return max(dp[0],dp[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};