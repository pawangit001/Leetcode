class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>hash(1002,0);
        vector<int>ans;
        if(nums1.size()<nums2.size())
        { for(auto i:nums1)hash[i]++;
         for(auto j:nums2)
         {
             if(hash[j]){hash[j]--;ans.push_back(j);}
         }
         }
        else
        {
            for(auto i:nums2)hash[i]++;
            for(auto j:nums1)
         {
             if(hash[j]){hash[j]--;ans.push_back(j);}
         }
        }
        return ans;
        
    }
};