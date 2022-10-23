class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        int mn=min(str[0].size(),str[str.size()-1].size());
        string f=str[0];
        string l=str[str.size()-1];
        int cnt=0;
        int i=0;
        while(i<mn)
        {
            if(f[i]==l[i])cnt++;
            else
               break;
            i++;
        }
        return cnt==0?"":f.substr(0,i);
    }
};