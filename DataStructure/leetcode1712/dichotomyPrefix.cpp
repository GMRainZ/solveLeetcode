// class Solution 
// {
// public:
//     int waysToSplit(vector<int>& nums) 
//     {
//         const int n = nums.size(),MOD=1e9+7;
//         vector<int> sum(n + 1);
//         for (int i = 0; i < n; ++i)
//             sum[i + 1] = sum[i] + nums[i];
//         int res = 0;
//         for (int r = 2; r < n && 3 * sum[r] <= 2 * sum[n]; ++r) {
//             int i = lower_bound(sum.cbegin() + 1, sum.cbegin() + r, 2 * sum[r] - sum[n]) - sum.cbegin();
//             int j = upper_bound(sum.cbegin() + i, sum.cbegin() + r, sum[r] / 2) - sum.cbegin();
//             res = (res + j - i) % MOD;
//         }
//         return res;
//     }
// };