class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int presum=0;
        m.clear();
       // m[nums[0]]=0;
       for(int i=0;i<nums.size();i++)
       {
            
          
           if(m.find(target-nums[i])!=m.end())
           {
               return {m[target-nums[i]],i};
           }
         else
             m[nums[i]]=i;
              
       }
        return {};
    }
};