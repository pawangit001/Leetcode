class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
       // if(k>n)return;
        reverse(nums.begin(),nums.begin()+abs(n-k));
        reverse(nums.begin()+abs(n-k),nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};