class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26]={};
        int mxcnt=0,st=0;
        int ans=0;
        for(int end=0;end<s.size();end++)
        {
            count[s[end]-'A']++;
            if(mxcnt<count[s[end]-'A'])
                mxcnt=count[s[end]-'A'];
           
            while(end-st-mxcnt+1>k)
            {
                count[s[st]-'A']--;
                st++;
                for(int i=0;i<26;i++)
                    mxcnt=max(count[i],mxcnt);
            }
            ans=max(ans,end-st+1);
        }
        return ans;
    }
};