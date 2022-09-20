class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        int f=0;
       
        while(i>=0 and nums[i]>=nums[i+1])i--;
        
        if(i>=0)
        {
            int j=nums.size()-1;
            while(nums[j]<=nums[i])
            {j--;f=1;}
            
            swap(nums[i],nums[j]);
        }
           if(i<0)
               reverse(nums.begin(),nums.end());
        else
            
               reverse(nums.begin()+i+1,nums.end());
          
        return;
     
    }
};