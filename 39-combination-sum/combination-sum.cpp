class Solution {
public:
    void solve(int idx, vector<int>& nums, int target, vector<int>& curr, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(curr);
            return;
        }
        if (idx == nums.size() || target < 0) return;

        curr.push_back(nums[idx]);
        solve(idx, nums, target - nums[idx], curr, res);
        curr.pop_back();

        solve(idx + 1, nums, target, curr, res);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(0, candidates, target, curr, res);
        return res;
    }
};
