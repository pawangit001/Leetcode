class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v(26,0);
        for(auto i:magazine)v[i-'a']++;
        for(auto i:ransomNote)
            if(v[i-'a']==0)return false;
        else
            v[i-'a']--;
        return true;
    }
};