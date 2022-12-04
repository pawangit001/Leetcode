class Solution {
    long long int mod=1;
public:
    int minimumAverageDifference(vector<int>& nums) {
       
        int n=nums.size();
        int ans=-1;
        int mindiff=INT_MAX;
        vector<long long int>prefixSum(n+1);
        vector<long long int>suffixSum(n+1);
       // prefixSum[0]=nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            prefixSum[i+1]=((prefixSum[i])+(nums[i]));
        }
       // suffixSum[n-1]=nums[n-1];
        for(int i=n-1;i>=0;i--)
        {
            suffixSum[i]=suffixSum[i+1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            //left avg
           long long int leftAvg=prefixSum[i+1];
            leftAvg/=i+1;
            //right average
        long long int rightAvg=suffixSum[i+1];
            if(i!=n-1)rightAvg/=n-i-1;
            int curdiff=int(abs(leftAvg-rightAvg));
            if(curdiff<mindiff)
            {
                mindiff=curdiff;
                ans=i;
            }
        }
        return ans;
        
    }
};