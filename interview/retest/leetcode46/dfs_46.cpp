// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>>ans;
//         vector<int>path(n);
//         vector<bool>vis(n,false);
        
//         function<void(int)>dfs=[&](int i)
//         {
//             if(i==n)
//             {
//                 ans.emplace_back(path);
//                 return;
//             }
            
//             for(int j=0;j<n;++j)
//             {
//                 if(vis[j])continue;
//                 vis[j]=true;
//                 path[i]=nums[j];
//                 dfs(i+1);
//                 vis[j]=false;
//             }
//         };
//         dfs(0);
//         return ans;
//         }
// };