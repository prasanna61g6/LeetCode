class Solution {
public:
    int maxCost(int idx, int n, vector<int>&house, vector<int>&dp) {
        if(idx >= n) return 0;
        if(dp[idx] != -1) return dp[idx];

        int pick = house[idx] + maxCost(idx + 2, n, house, dp);
        int skip = maxCost(idx + 1, n, house, dp);

        return dp[idx] = max(pick, skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, -1);
        int ans = maxCost(0, n, nums, dp);
        return ans;
    }
};