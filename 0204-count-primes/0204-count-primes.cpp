class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)return 0;
        int ans=0;
        vector<bool>nPrime(n+1,true);
        for(int i=2;i<n;i++)
        {
            if(nPrime[i]==true)
            {
                ans++;
                for(int j=2*i;j<=n;j=j+i)
                {
                    nPrime[j]=false;
                }
            }
        }
        // int ans=0;
        // for(int i=2;i<n;i++)if(nPrime[i]==true)ans++;
        return ans;
    }
};