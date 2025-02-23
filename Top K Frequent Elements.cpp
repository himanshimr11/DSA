//https://leetcode.com/problems/top-k-frequent-elements/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums)
        {
            freq[num]++;
        }
       // copy(freq.begin(),freq.end())
       vector<pair<int,int>>ele(freq.begin(),freq.end());
       sort(ele.begin(),ele.end(),[](auto& a,auto& b)
       {
        return a.second>b.second;
       });
       vector<int> result;
       for(int i=0;i<k;i++)
       result.push_back(ele[i].first);
       return result;
        //vector<int> map

        
        
    }
};
