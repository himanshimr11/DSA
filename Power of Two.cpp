//https://leetcode.com/problems/power-of-two/
class Solution {
public:
    bool isPowerOfTwo(int n) {
       // int n;
        if (n<=0)
        {
            return false;
        }
        while(n%2==0)
        {
           // return true;
           n/=2;
        }
        //else
       // return false;
       return n==1;
        
    }
};
