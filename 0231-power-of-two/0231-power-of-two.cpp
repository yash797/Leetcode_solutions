class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==0)
            return false;
        // if(n%)
        return (2147483648%n==0 && n>0);
        
    }
};