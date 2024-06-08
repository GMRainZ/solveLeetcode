// class Solution {

// public:

//     int longestWPI(vector<int> &hours) {

//         int n = hours.size(), ans = 0, s = 0, pos[n + 2]; // 记录前缀和首次出现的位置

//         memset(pos, 0, sizeof(pos));

//         for (int i = 1; i <= n; ++i) {

//             hours[i - 1] > 8 ? --s : ++s; // 所有和前缀和相关的都取反

//             if (s < 0) ans = i;

//             else {

//                 if (pos[s + 1]) ans = max(ans, i - pos[s + 1]);

//                 if (pos[s] == 0) pos[s] = i;

//             }

//         }

//         return ans;

//     }

// };
