class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnthalfv=0,cnthalfv2=0;
        for(int i=0;i<s.size();i++)
        {
            char x=s[i];
            if ((x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U') and i<s.size()/2)cnthalfv++;
            else if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U')cnthalfv2++;
        }
        return cnthalfv==cnthalfv2;
    }
};