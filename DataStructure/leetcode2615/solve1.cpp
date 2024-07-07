// class Solution {

// public:

//     vector<long long> distance(vector<int> &nums) {

//         int n = nums.size();

//         unordered_map<int, vector<int>> groups;

//         for (int i = 0; i < n; ++i)

//             groups[nums[i]].push_back(i); // 相同元素分到同一组，记录下标



//         vector<long long> ans(n);

//         for (auto &[_, a]: groups) {

//             int m = a.size();

//             long long s = 0;

//             for (int x: a)

//                 s += x - a[0]; // a[0] 到其它下标的距离之和

//             ans[a[0]] = s;

//             for (int i = 1; i < m; ++i)

//                 // 从计算 a[i-1] 到计算 a[i]，考虑 s 增加了多少

//                 ans[a[i]] = s += (long long) (i * 2 - m) * (a[i] - a[i - 1]);

//         }

//         return ans;

//     }

// };

