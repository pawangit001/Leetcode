class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>map(128,0);
        int start=0,end=0,head=0,mn=INT_MAX;
        for(auto i:t)map[i]++;
        int cnt=t.size();
        while(end<s.size())
        {
            if(map[s[end++]]-->0)cnt--;
           
            while(cnt==0)
            {
             if(end-start<mn)mn=end-(head=start);
                if(map[s[start++]]++==0)cnt++;
            }
        }
        return mn==INT_MAX?"":s.substr(head,mn);
    }
};