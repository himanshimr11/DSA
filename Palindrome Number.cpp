//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
    int s;
    long sum=0;
    for(int i=x;i!=0;i=i/10)
    {
        s = i%10;
        sum = (sum*10)+s;
    }
    if(sum == x&&x>=0)
    return true;
    else 
    return false;
    }
};
