class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long count =0;
        for(int i=0;i<=min(n,limit);i++){
            int j_max=min(n-i,limit);
            int j_min=max(0,n-i-limit);
            if(j_min>j_max)continue;
            count += (long long)(j_max-j_min+1);
        }
        return count;
        
    }
};