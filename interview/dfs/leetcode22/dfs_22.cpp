// class Solution {
// public:
//     vector<string> generateParenthesis(int n) {
//         vector<string>ans;
//         int m=2*n;
//         string path(m,' ');
//         function<void(int,int)>dfs=[&](int i,int open)
//         {
//             if(i==m)
//             {
//                 ans.emplace_back(path);
//                 return;
//             }
//             if(open<n)
//             {
//                 path[i]='(';
//                 dfs(i+1,open+1);
//             }
//             if(i<2*open)
//             {
//                 path[i]=')';
//                 dfs(i+1,open);
//             }
//         };
//         dfs(0,0);
//         return ans;
//     }   
// };