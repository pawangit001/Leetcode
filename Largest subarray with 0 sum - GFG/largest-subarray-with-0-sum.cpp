//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int prefixSum=0;
        unordered_map<int,int>m;
        int res=0;
        for(int i=0;i<n;i++)
        {
            prefixSum+=A[i];
            if(prefixSum==0)res=max(res,i+1);
            if(m.find(prefixSum)!=m.end())
            {
                res=max(res,i-m[prefixSum]);
            }
            else
            m[prefixSum]=i;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends