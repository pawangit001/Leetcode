class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)if(nums[i]==0)nums[i]=-1;
        int pre_sum=0;
        unordered_map<int,int>m;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            if(pre_sum==0)res=max(res,i+1);
            if(m.find(pre_sum)!=m.end())
                res=max(res,i-m[pre_sum]);
            else
            m[pre_sum]=i;
        }
        return res;
    }
};