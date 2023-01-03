class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int sz=strs[0].size();
        int ans=0;
        for(int i=0;i<sz;i++)
        {
            for(int rows=0;rows<strs.size()-1;rows++)
            {
                if(strs[rows][i]>strs[rows+1][i])
                { ans++;break;}
                
            }
        }
        return ans;
        
    }
};