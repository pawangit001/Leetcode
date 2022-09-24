class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int>h;
        int ans=0;
        for(auto i:s)h[i]++;
        if(h.size()==1)return h[s[0]];
        for(auto i:h)
        {
            if(i.second %2==0)
                ans+=i.second;
            else
                ans+=i.second-1;
        }
        if(ans==s.size())return ans;
        return ans+1;
    }
};