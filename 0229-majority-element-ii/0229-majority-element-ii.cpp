class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int x(-1),y(-1),cy=0,cx=0;
        for(const auto &i:nums)
            
        {
            if(i==x)cx++;
            else if(i==y)cy++;
            else if(! cx)x=i,cx=1;
            else if(! cy)y=i,cy=1;
            else
                cy--,cx--;
        }
        cy=0,cx=0;
        for(const auto &i:nums)
        {
            if(i==x)cx++;
           else if(i==y)cy++;
        }
        vector<int>ans;
        if(cx >size(nums)/3)ans.push_back(x);
        if(cy >size(nums)/3)ans.push_back(y);
        return ans;
            
    }
};