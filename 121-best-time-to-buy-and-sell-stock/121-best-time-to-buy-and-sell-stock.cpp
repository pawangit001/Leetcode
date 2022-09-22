class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ma=0,mi=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            ma=max(ma,prices[i]-mi);
            mi=min(mi,prices[i]);
        }return ma;
    }
};