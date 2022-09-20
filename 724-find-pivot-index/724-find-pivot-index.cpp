class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0;
        int sum=0;
        for(auto i:nums)sum+=i;
        for(int i=0;i<nums.size();i++)
        {
            if(lsum==(sum-nums[i]))return i;
            else 
            {
                lsum+=nums[i];
                sum-=nums[i];
            }
        }
        return -1;
    }
};