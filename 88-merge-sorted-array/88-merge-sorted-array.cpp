class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,ind=m+n-1;
        if(nums2.size()==0)return;
        if(nums1.size()==0){nums1=nums2;return;}
        while(i>=0 and j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[ind--]=nums1[i--];
                
            }
            else 
            nums1[ind--]=nums2[j--];
        }
        while(j>=0)
        {
            nums1[ind--]=nums2[j--];
        }
    }
};