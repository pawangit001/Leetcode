class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int maxEnd=nums[0],cur=nums[0];
        for(int i=1;i<nums.size();i++)
        {  
            maxEnd=max(maxEnd+nums[i],nums[i]);
            cur=max(cur,maxEnd);
        }
        return cur;
    }
};