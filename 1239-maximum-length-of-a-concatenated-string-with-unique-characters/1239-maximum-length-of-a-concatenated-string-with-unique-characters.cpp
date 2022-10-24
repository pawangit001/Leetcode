class Solution {
public:
    bool comp(string &cur,vector<int>&hash)
    {
        vector<int>curcheck(26,0);
        for(int i=0;i<cur.size();i++)
        {
            if(curcheck[cur[i]-'a']==1)return false;
            else
                curcheck[cur[i]-'a']=1;
        }
        for(int i=0;i<cur.size();i++)
            if(hash[cur[i]-'a']==1)return false;
        return true;
    }
    int solve(int i,vector<string>&arr,vector<int>&hash,int &len)
    {
        if(i==arr.size())return len;
        
       // for(int i=0;i<arr.size();i++)
        {
            if(comp(arr[i],hash)==false)
            {
                return solve(i+1,arr,hash,len);
            }
            else
            {
                // pick
                len+=arr[i].size();
                for(auto ch:arr[i])hash[ch-'a']=1;
                int res1=solve(i+1,arr,hash,len);
                len-=arr[i].size();
                for(auto ch:arr[i])hash[ch-'a']=0;
                int res2=solve(i+1,arr,hash,len);
                
                return max(res1,res2);
            }
        }
        
    }
    int maxLength(vector<string>& arr) {
        vector<int>hash(26,0);
        int len=0;
        return solve(0,arr,hash,len);
    }
};