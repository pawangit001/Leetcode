class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)mp[i]++;
        string res="";
        set<pair<int,char>>st;
        for(auto i:mp)st.insert({i.second,i.first});
        for(auto i:st)
        {         
         string t=string(i.first,i.second);
         res=t+res;
        }
      //  reverse(res.begin(),res.end());
        return res;
    }
};