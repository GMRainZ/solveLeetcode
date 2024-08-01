// class Solution {
//     int n;
//     vector<vector<int>>ans;
//     vector<int>path;    
//     void dfs(int x,vector<int>&nums)
//     {
//         if(x==n)
//         {
//             ans.emplace_back(path);
//             return ;
//         }

//         dfs(x+1,nums);

//         path.emplace_back(nums[x]);
//         dfs(x+1,nums);
//         path.pop_back();
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         n=nums.size();
//         dfs(0,nums);
//         return ans;
//     }
// };