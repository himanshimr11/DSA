//https://leetcode.com/problems/binary-search/
class Solution(object):
    def search(self, nums, target):
        n=len(nums)  
        l=0 
        r=n-1 
        while l<=r:
            m=(l+r) // 2

            if target == nums[m]:
                return m
            elif target < nums[m]:
               r =  m - 1
            else:
               l = m + 1
        return -1
