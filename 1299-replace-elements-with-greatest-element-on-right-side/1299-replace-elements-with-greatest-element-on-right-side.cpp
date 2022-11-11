class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int mx=arr[n-1];
        arr[n-1]=-1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            int t=mx;
            mx=max(mx,arr[i]);
            arr[i]=t;
        }
        return arr;
        
        
        
    }
};