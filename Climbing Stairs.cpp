//https://leetcode.com/problems/climbing-stairs/
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1)
        {
        return 1;
        }
        int a=0;
        int b=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        return sum;
        
    }
};
