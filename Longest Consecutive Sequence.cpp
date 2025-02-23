//https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       // int l=1, curr=1;
        
        if (nums.empty())
        return 0;
        sort(nums.begin(), nums.end());
        int l=1, curr=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            continue;
            if (nums[i] == nums[i - 1] + 1) 
            {
                  curr++;
            }
                else
                {
               l= max(l,curr);
                curr=1;
                }
        }
        return max(l,curr);
        
    }
};
