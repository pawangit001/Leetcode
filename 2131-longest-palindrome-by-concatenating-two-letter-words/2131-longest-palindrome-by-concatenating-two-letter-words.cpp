class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>m;
        for(auto i:words) m[i]++;
        int ans=0;
        int i=0;
        int central=0;
        while(i<words.size())
        {
            string s=words[i];
            reverse(s.begin(),s.end());
            if(s[0]!=s[1] and m.find(s)!=m.end())
            {
                ans= ans+  4*min(m[words[i]],m[s]);
                m.erase(s);
                m.erase(words[i]);
            }
            else if(s[0]==s[1])
            {
                if(m[words[i]]%2==0)
                ans= ans + 2*(m[words[i]]);
                else
                { ans+=2*(m[words[i]]-1);central=1;}
                m.erase(words[i]);
            }
            i++;
        }
        if(central)ans+=2;
        return ans;
    }
};