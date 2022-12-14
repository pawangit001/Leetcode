class Solution {
public:
    int dp[101];
    int solve(int n,vector<int>&nums)
    {
        if(n<=0)return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]= max(nums[n-1]+solve(n-2,nums),solve(n-1,nums));
    }
    int rob(vector<int>& nums) {
         memset(dp,-1,sizeof(dp));
        return solve(nums.size(),nums);
        
    }
};