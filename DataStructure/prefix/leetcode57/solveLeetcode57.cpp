// //use leetcode56
// class Solution 
// {

//     vector<vector<int>> merge(vector<vector<int>>& intervals) 
//     {
//         const int n=intervals.size(),maxn=1e4+7;
//         sort(intervals.begin(),intervals.end());

//         vector<vector<int>>ans;

//         int i;
//         for(i=0;i<n;++i)
//         {
//             if(ans.empty() || ans.back()[1]<intervals[i][0])
//                 ans.emplace_back(intervals[i]);
//             else ans.back()[1]=max(intervals[i][1],ans.back()[1]);
//         }

//         return ans;
//     }
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
//     {
//         intervals.emplace_back(newInterval);
//         return merge(intervals);
//     }
// };






