class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    int n=nums.size();
        if(n<3)return false;
       int p1=INT_MAX,p2=INT_MAX;
        for(auto p:nums)
        {
            if(p<=p1)p1=p;
            else if(p<=p2)p2=p;
            else
                return true;
        }
        return false;
    }
};