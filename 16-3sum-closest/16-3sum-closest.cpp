class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int n=nums.size();
        int diff=INT_MAX;
       
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++)
        { if(i > 0 && nums[i] == nums[i-1]) continue;
            int l=i+1;
            int h=n-1;
          //  int sum=target-nums[i];
            while(l<h)
            {
                int sum=nums[l]+nums[h]+nums[i];
                int d=abs(target-sum);
                if(sum==target)return sum;
                if(d<abs(target-res))res=sum;
                if(sum>target)h--;
                else
                    l++;
                
            }
        }
        return res;
        
       
    }
};