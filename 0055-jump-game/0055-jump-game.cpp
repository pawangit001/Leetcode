class Solution {
public:
    bool canJump(vector<int>& nums) {
        int step=nums[0];
       int maxrange=nums[0];
        if(nums.size()==1)return true;
        if(nums[0]==0)return false;
        for(int i=1;i<nums.size();i++)
        {
            if(maxrange<i)return false;
            maxrange=max(maxrange,i+nums[i]);
        }
        return maxrange>=nums.size()-1;
    }
};