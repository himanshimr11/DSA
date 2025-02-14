//https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         unordered_map<int,int> numsco;  
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           if( numsco.find(nums[i])!=numsco.end())
          {
             return nums[i];
          }
             numsco[nums[i]]++;
        }
        return -1;

        
    }
};
