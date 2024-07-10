//最大化分割等和数组的分割方案
//你至多有一次修改的机会 

// class Solution {
// public:
//     int waysToPartition(vector<int>& nums, int k) {
//         const int n = nums.size();

//         vector<long long> prefix(n);
//         prefix[0] = nums[0];
//         unordered_map<long long, int> cntL, cntR;
//         for (int i = 1; i < n; ++i) {
//             prefix[i] = prefix[i - 1] + nums[i];
//             ++cntR[prefix[i - 1]];
//         }
//         int ans = 0;
//         long long tot = prefix[n - 1];
//         if (!(tot&1)) ans = cntR[tot / 2];

//         for (int i = 0; i < n; ++i) {
//             int dif = k - nums[i];
//             if ((tot + dif) % 2 == 0) {
//                 //cr + dif == (tot + dif) / 2,因为cr的前缀和都包含了修改前的nums[i]
//                 ans = max(ans, cntL[(tot + dif) / 2] + cntR[(tot - dif) / 2]);
//             }
//             cntL[prefix[i]]++;
//             cntR[prefix[i]]--;
//         }
//         return ans;
//     }
// };