class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          
        unordered_set<int>s(nums.begin(),nums.end());
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                int cnt=0;
                int t=nums[i];
                while(s.find(t)!=s.end())
                {
                    t++;
                    cnt++;
                }
                res=max(res,cnt);
                
            }
        }
        return res;
    }
};