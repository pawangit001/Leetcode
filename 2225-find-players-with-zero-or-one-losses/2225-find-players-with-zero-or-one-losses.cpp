class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int>s;
        map<int,int>m;
        for(int i=0;i<matches.size();i++)
        {
            if(m[matches[i][0]]==0)
                s.insert(matches[i][0]);
            if(s.find(matches[i][1])!=s.end())s.erase(matches[i][1]);
            m[matches[i][1]]++;
        }
        vector<int>res;
        for(auto i:s)res.push_back(i);
        vector<int>res1;
        for(auto i:m)
            if(i.second==1)
            res1.push_back(i.first);
        return {res,res1};
    }
};