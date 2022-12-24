class Solution {
public:
    double Pow(double x,int n)
    {
        double temp;
        if(n==0)return 1;
        temp=Pow(x,n/2);
        if(n%2==0)
            return temp*temp;
        else
            return x*temp*temp;
    }
    double myPow(double x, int n) {
        if(n<0)
           return Pow(1/x,n);
        else
            return Pow(x,n);
    }
};