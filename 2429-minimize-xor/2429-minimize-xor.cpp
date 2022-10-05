class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int a=__builtin_popcount(num1),b=__builtin_popcount(num2);
        int ans=0;
        for(int i=31;i>=0 and b;i--)
        {
            if(num1  &(1<<i))
            {
                ans+=(1<<i);
                b--;
            }
        }
        for(int i=0;i<32 and b;i++)
        {
            if(!(num1 & (1<<i)))
            {
                ans+=(1<<i);
                b--;
            }
        }
        return ans;
    }
};