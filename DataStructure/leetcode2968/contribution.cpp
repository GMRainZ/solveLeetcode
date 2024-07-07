// 滑动窗口枚举右端点
// 计算窗口滑动时，各个元素的变换引起的差值
// 注意：窗口中位数的计算，根据原始窗口尺寸的奇偶性进行讨论
// class Solution {
// public:
//     int maxFrequencyScore(vector<int> &nums, long long k) {
//         sort(nums.begin(), nums.end());
//         int ans = 0, left = 0;
//         long long s = 0; // 窗口元素与窗口中位数的差之和
//         for (int right = 0; right < nums.size(); right++) {
//             s += nums[right] - nums[(left + right) / 2];
//             while (s > k) {
//                 s += nums[left] - nums[(left + right + 1) / 2];
//                 left++;
//             }
//             ans = max(ans, right - left + 1);
//         }
//         return ans;
//     }
// };
