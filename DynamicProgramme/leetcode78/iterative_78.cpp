// class Solution {
//     vector<int>t;
//     vector<vector<int>>ans;
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int n=nums.size();
//         for(int mask=0;mask<(1<<n);++mask)
//         {
//             t.clear();
//             for(int i=0;i<n;++i)
//             {
//                 if(mask&(1<<i))t.emplace_back(nums[i]);
//             }
//             ans.emplace_back(t);
//         }
//         return ans;
//     }
// };