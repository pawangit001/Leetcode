//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int>ans(R*C);
        int k=0;
        int top=0,bot=R-1,l=0,r=C-1;
        while(top<=bot and l<=r)
        {
        for(int i=top;i<=r;i++)
        {
          ans[k++]=a[top][i];   
        }
        top++;
        if(top>bot)break;
        for(int i=top;i<=bot;i++)
        {
            ans[k++]=a[i][r];
        }
        r--;
        if(l>r)break;
        for(int i=r;i>=l;i--)
        {
            ans[k++]=a[bot][i];
        }
        bot--;
        if(top>bot)break;
        for(int i=bot;i>=top;i--)
        {
            ans[k++]=a[i][l];
        }
        l++;
        if(l>r)break;
        
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends