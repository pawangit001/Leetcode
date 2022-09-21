class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<int>ans;
        int n=queries.size();
        int i=0;
        int evensum=0;
        for(auto i:nums)
                if(!(i%2))evensum+=i;
        while(i<n)
        { 
            int f=0;int p=0;
            if(nums[queries[i][1]]%2==0){ f=1;p=nums[queries[i][1]];}
            
            nums[queries[i][1]]+=queries[i][0];
            if(nums[queries[i][1]]%2==0 and !f)
            { ans.push_back(nums[queries[i][1]]+evensum);
             evensum+=nums[queries[i][1]];}
            else if(f and nums[queries[i][1]]%2==0)
            {
               evensum= evensum+queries[i][0];
                ans.push_back(evensum);
            }
            else if( f and nums[queries[i][1]]%2!=0)
            {
                
                ans.push_back(evensum-p);
                 evensum-=p;
              
            }
            else 
            {
                ans.push_back(evensum);
            }
            i++;
        }
        return ans;
    }
};