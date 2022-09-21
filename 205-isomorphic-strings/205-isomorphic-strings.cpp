class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>m,m2;
        string a="",b="";
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end())
                a+=to_string(m[s[i]]);
            else
                m[s[i]]=i;
            if(m2.find(t[i])!=m2.end())
                b+=to_string(m2[t[i]]);
            else
                m2[t[i]]=i;
            if(a==b)continue;
            else
                return false;
        }
        return a==b;
    }
};