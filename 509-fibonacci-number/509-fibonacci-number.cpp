class Solution {
public:
    int fib(int n) {
//         if(n==0)return 0;
//        if(n==1)return 1;
//         if(n==2)return 1;
        
        
//         return fib(n-1)+fib(n-2);
        
        // Using Binet's Formula 
        double phi = (sqrt(5) + 1) / 2;     
        return round(pow(phi, n) / sqrt(5));///Using binet's formula
    }
};