// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         // key表示num，value表示num所在连续区间的长度
//         unordered_map<int, int> map;
//         int ans = 0;
//         for (int num : nums) {
//             // 当map中不包含num，也就是num第一次出现
//             if (map.find(num) == map.end()) {
//                 // left为num-1所在连续区间的长度，更进一步理解为：左连续区间的长度
//                 int left = map.count(num - 1) ? map[num - 1] : 0;
//                 // right为num+1所在连续区间的长度，更进一步理解为：右连续区间的长度
//                 int right = map.count(num + 1) ? map[num + 1] : 0;
//                 // 当前连续区间的总长度
//                 int curLen = left + right + 1;
//                 ans = max(ans, curLen);
//                 // 将num加入map中，表示已经遍历过该值。其对应的value可以为任意值。
//                 map[num] = -1;
//                 // 更新当前连续区间左边界和右边界对应的区间长度
//                 map[num - left] = curLen;
//                 map[num + right] = curLen;
//             }
//         }
//         return ans;
//     }
// };