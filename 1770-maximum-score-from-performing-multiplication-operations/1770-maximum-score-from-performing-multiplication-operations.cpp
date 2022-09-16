class Solution {
public:
    //int dp[10002][1002];
//     int solve(vector<int>&nums,vector<int>&mult,int i,int j,int n,int ind)
//     {         int m=mult.size();
//              if(dp[i][ind]!=-1)return dp[i][ind];
//              if(ind>=m)return 0;
//              if(i>j)return 0;
            
        
//         int x=nums[i]*mult[ind]+solve(nums,mult,i+1,j,n,ind+1);
//         int y=nums[(n-1)-(ind-i)]*mult[ind]+solve(nums,mult,i,j,n,ind+1);
//          return dp[i][ind]= max(x,y);
    
//     }
    int maximumScore(vector<int>& nums, vector<int>& mult) {
        int n=nums.size();
        int m=mult.size();
       // memset(dp,-1,sizeof(dp));
 
           // return solve(nums,mult,0,n-1,n,0);
        vector<vector<int>>dp(m+1,vector<int>(m+1,0));
        for(int ind=m-1;ind>=0;ind--)
        {
            for(int i=ind;i>=0;i--)
            {
        dp[ind][i]=max(nums[i]*mult[ind]+dp[ind+1][i+1],nums[(n-1)-(ind-i)]*mult[ind]+dp[ind+1][i]);
            }
        }
        return dp[0][0];
    }
};