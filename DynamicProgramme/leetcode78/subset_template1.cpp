// class Solution {
//     int n;
//     vector<vector<int>>ans;
//     vector<int>path;    
//     void dfs(int x,vector<int>&nums)
//     {
//         ans.emplace_back(path);
//         if(x==n)
//         {
//             return ;
//         }

//         for(int i=x;i<n;++i)
//         {
//             path.emplace_back(nums[i]);
//             dfs(i+1,nums);
//             path.pop_back();
//         }
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         n=nums.size();
//         dfs(0,nums);
//         return ans;
//     }
// };