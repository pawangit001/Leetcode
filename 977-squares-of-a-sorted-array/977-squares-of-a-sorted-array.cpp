class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       // for(int i=0;i<nums.size();i++)nums[i]=(nums[i]*nums[i]);
        vector<int>ans(nums.size());
        int i=0,j=nums.size()-1;
        int k=nums.size()-1;
        while(i<=j)
        {
          if(abs(nums[i])<abs(nums[j]))
          {
              ans[k]=(nums[j]*nums[j]);
              k--;
              j--;
          }
            else
            { ans[k]=(nums[i]*nums[i]);
             k--;
             i++;}
        }
        return ans;
    }
};