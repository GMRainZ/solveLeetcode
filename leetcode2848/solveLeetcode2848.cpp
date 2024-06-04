// class Solution {
// public:
//     int numberOfPoints(vector<vector<int>>& nums) 
//     {
//         vector<int>f(105);
//         for(const auto&num:nums)
//         {
//             ++f[num[0]],--f[num[1]+1];
//         }

//         int ans=0;
//         for(int i=0;i<=100;++i)
//         {
//             f[i+1]+=f[i];
//             ans+=f[i+1]>0;
//         }

//         return ans;
//     }
// };