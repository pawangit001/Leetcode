class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto i:arr)m[i]++;
        unordered_set<int>s;
        for(auto i:m)
        {
            if(s.find(i.second)!=s.end())return false;
            else
                s.insert(i.second);
        }
        return true;
    }
};