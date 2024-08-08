// class Solution 
// {
// public:
//     int uniquePaths(int m, int n) 
//     {
//         vector<vector<int>>f(m+1,vector<int>(n+1,1));

//         int i,j;

//         for(i=1;i<m;++i)
//         {
//             for(j=1;j<n;++j)
//             {
//                 f[i+1][j+1]=f[i][j+1]+f[i+1][j];
//             }
//         }

//         return f[m][n];
//     }
// };