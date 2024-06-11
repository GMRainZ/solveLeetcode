// class Solution {

// public:

//     // long long countInterestingSubarrays(vector<int> &nums, int mod, int k) {

//     //     unordered_map<int, int> cnt;

//     //     cnt[0] = 1; // 把 s[0]=0 算进去

//     //     long long ans = 0;

//     //     int s = 0;

//     //     for (int x: nums) {

//     //         s += x % mod == k;

//     //         ans += cnt[(s - k + mod) % mod]; // +mod 避免减法出现负数

//     //         cnt[s % mod]++;

//     //     }

//     //     return ans;

//     // }

    

//     // 数组版本，效率更高！

//     // 因为 s 至多为 n

//     long long countInterestingSubarrays(vector<int> &nums, int mod, int k) {

//         int n = nums.size();

//         vector<int> cnt(n + 1);

//         cnt[0] = 1;

//         long long ans = 0;

//         int s = 0;

//         for (int x: nums) {

//             if (x % mod == k)

//                 s = (s + 1) % mod;

//             int s2 = (s - k + mod) % mod;

//             if (s2 <= n)

//                 ans += cnt[s2];

//             cnt[s]++;

//         }

//         return ans;

//     }

// };

