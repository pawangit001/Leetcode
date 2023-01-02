class Solution {
public:
    bool detectCapitalUse(string word) {
      int cnt=0;
        
        for(int i=0;i<word.size();i++)
        {
            int d=word[i]-0;
            cout<<d<<" ";
            if(d>=65 and d<=90)cnt++;
        }
        cout<<'F'-0;
        if(cnt==0 or cnt==word.size())
        return true;
        else if(cnt==1)
        {
            int d=word[0]-0;
            if(d>=65 and d<=90)return true;
            return false;
        }
        return false;
    }
};