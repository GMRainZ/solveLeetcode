// class Solution {
//     vector<vector<int>>ans;
//     vector<int>path;
//     void dfs(const vector<int>& nums,int i,int t){
//         if(t==0){
//             ans.emplace_back(path);
//             return;
//         }
//         if(t<0 || i<0){
//             return;
//         }

//         //不选
//         dfs(nums,i-1,t);

//         //选
//         path.emplace_back(nums[i]);
//         dfs(nums,i,t-nums[i]);
//         path.pop_back();
//     }
// public:
//     vector<vector<int>> combinationSum(vector<int>& nums, int t) {
//         dfs(nums,nums.size()-1,t);
    
//         return ans;
//     }
// };