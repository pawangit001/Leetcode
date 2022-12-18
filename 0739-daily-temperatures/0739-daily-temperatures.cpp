class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>s;
        int n=temp.size();
        s.push(n-1);
        vector<int>ans(n,0);
        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() and temp[s.top()]<=temp[i])
                s.pop();
            if(!s.empty())
            {
                ans[i]=s.top()-i;
                
            }
            s.push(i);
        }
        return ans;
    }
};