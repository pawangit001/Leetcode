class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size();
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(target<=nums[mid])
                h=mid;
            else
                l=mid+1;
        }
        return h;
    }
};