class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int res=0,cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[res]==nums[i])
            {
               cnt++;
            }
            else
                cnt--;
            if(cnt==0)
            {
                res=i,cnt=1;
            }
        }
        cnt=0;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]==nums[res])cnt++;
            if(cnt>(nums.size())/2)
                return nums[res];
            i++;
        }
        return nums[res];
    }
};