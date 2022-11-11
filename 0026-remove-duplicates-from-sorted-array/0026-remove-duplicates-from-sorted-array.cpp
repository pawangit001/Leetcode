class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])continue;
            else
                nums[k++]=nums[i];
        }
        return k;
    }
};