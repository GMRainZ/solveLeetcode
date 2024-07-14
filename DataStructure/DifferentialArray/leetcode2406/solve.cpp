// class Solution {
// public:
//     int minGroups(vector<vector<int>>& intervals) {
//         map<int,int>diff;
//         for(const auto&interval:intervals)
//             ++diff[interval[0]],--diff[interval[1]+1];
//         int ans=0,sum=0;
//         for(auto[_,d]:diff)
//         {
//             ans=max(ans,sum+=d);
//         }
//         return ans;
//     }
// };