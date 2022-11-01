class Solution {
public:
    bool isPalindrome(int x) {
            if (x < 0) 
        return false;
    if (x == 0) // to avoid log10(0)
        return true;

    int n = log10(x) + 1; // compute -> n digits
    int times = n / 2; // we need to compare n / 2 times (move two pointers at one move)
    int l = (int) pow(10, n - 1), r = 1;
    while (times--) { 
        if ((x / l) % 10 != (x / r) % 10) { // if (left digit != right digit)
            return false;
        }
        l /= 10;
        r *= 10;
    }
    return true;

    }
};