class Solution {
public:
    bool isvowel(char a)
    {
        if(a=='a'  or a=='A' or a=='e' or a=='E' or a=='i' or a=='I' or a=='o' or a=='O' or a=='U' or a=='u')
            return true;
        else
            return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(isvowel(s[i]) and isvowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;j--;
            }
            else if(!isvowel(s[i]))i++;
            else j--;
        }
        return s;
    }
};