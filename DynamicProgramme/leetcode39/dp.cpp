// class Solution {
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         int n = candidates.size();
//         // 完全背包
//         vector<vector<bool>> f(n + 1, vector<bool>(target + 1));
//         f[0][0] = true;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j <= target; j++) {
//                 f[i + 1][j] = f[i][j] || j >= candidates[i] && f[i + 1][j - candidates[i]];
//             }
//         }

//         vector<vector<int>>ans;
//         vector<int>path;

//         function<void(int,int)>dfs=[&](int i,int t){
//             if(!t){
//                 ans.emplace_back(path);
//                 return;
//             }
//             if(t<0 || !f[i+1][t]){
//                 return;
//             }

//             dfs(i-1,t);

//             path.emplace_back(candidates[i]);
//             dfs(i,t-candidates[i]);
//             path.pop_back();
//         };

//         dfs(n-1,target);

//         return ans;
//     }   
// };