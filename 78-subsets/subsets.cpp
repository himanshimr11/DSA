class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int total= pow(2,n);
        vector<vector<int>>result;
        for(int m=0;m<total;++m)
        {
            vector<int>subset;
            for(int i=0;i<n;++i)
            {
                if(m&(1<<i))
                {
                    subset.push_back(nums[i]);
                }
            }
            result.push_back(subset);
        }
        
        return result;
        
    }
};