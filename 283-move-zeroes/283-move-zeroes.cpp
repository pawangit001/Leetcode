class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int res=0;
        for(auto i:nums)
            if(i!=0)nums[res++]=i;
        while(res<nums.size())
            nums[res++]=0;
    }
};