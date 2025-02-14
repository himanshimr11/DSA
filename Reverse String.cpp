//https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& s,int l=0) {
        int n=s.size() -l-1;
        //for(int i=1;i<n;i++)
        if(l>=n)
        {
            return;

        }
        int a,b;
        a=s[l];
        s[l]=s[n];
        s[n]=a;
        //swap(s[l],s[n]);
        reverseString(s,l+1);
        
    } 
    // return ;
};
