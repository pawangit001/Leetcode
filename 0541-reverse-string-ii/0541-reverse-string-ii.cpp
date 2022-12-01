class Solution {
    private:
    void revers(string &s,int i,int j)
    {
        while(i<j)
        {
            swap(s[i],s[j]);
            j--,i++;
        }
        return;
    }
public:
    string reverseStr(string s, int k) {
        
        if(s.size()<=k){reverse(s.begin(),s.end());return s;}
        for(int i=0;i<s.size();)
        {
            int j;
            if(i+k-1<s.size()-1)j=i+k-1;
            else
                j=s.size()-1;
            revers(s,i,j);
            i=i+2*k;
        }
        return s;
    }
};