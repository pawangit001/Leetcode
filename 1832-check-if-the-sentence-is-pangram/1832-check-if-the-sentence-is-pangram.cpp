class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>h(26,false);
        for(auto i:sentence)h[i-'a']=true;
        for(int i=0;i<26;i++)
            if(h[i]==false)return false;
        return true;
    }
};