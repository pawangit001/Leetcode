class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=1;
        int slo=nums[0],fast=0; ;
        while(nums[fast]!=-1)
        {
            fast=nums[slo];
            nums[slo]=-1;
            slo=fast;
           
        }
        return fast;
    }
};