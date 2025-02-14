//https://leetcode.com/problems/k-th-symbol-in-grammar/
class Solution {
public:
    int kthGrammar(int n, int k) {
        //int s=n.size();
       //int  l=0,g=0,r;
       if(n==1)
       {
        return 0;
       }
       int mid = (1 << (n - 2));//SQ. 2*N-2
       if(k<=mid)
       {
        return kthGrammar (n-1,k);
       }
       else
       {
        return 1-kthGrammar(n-1,k-mid);
       }
        
    }
};
