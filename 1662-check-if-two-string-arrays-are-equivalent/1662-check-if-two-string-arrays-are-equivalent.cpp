class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1="",res2="";
        for(auto i:word1)res1+=i;
        for(auto i:word2)res2+=i;
        return res1==res2;
    }
};