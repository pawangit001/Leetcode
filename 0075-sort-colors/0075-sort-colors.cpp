class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,mid=0,h=nums.size()-1;
        if(h==0)return;
        while(mid<=h)
        {
            if(nums[mid]==0){swap(nums[l],nums[mid]),l++;mid++;}
           else if(nums[mid]==1)mid++;
            else if(nums[h]==2)h--;
            else
            {
                swap(nums[mid],nums[h]);
                
            }
        }
    }
};