class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=nums[0];
        int MaxEnding=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           MaxEnding=max(MaxEnding+nums[i],nums[i]);
            cursum=max(cursum,MaxEnding);
           // if(cursum<0)cursum=0;
            
        
        }
        return cursum;
    }
};