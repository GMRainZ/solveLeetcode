// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) 
//     {
//         const int rows=grid.size(),cols=grid[0].size();
//         vector<int>f(cols+1);
        
//         int i,j;
//         for(i=0;i<rows;++i)
//         {
//             for(j=0;j<cols;++j)
//             {
//                 if(!i)f[j+1]=f[j]+grid[i][j];
//                 else if(!j)f[j+1]+=grid[i][j];
//                 else f[j+1]=min(f[j+1],f[j])+grid[i][j];
//                 //f[j+1]=min(f[j+1],f[j])+grid[i][j];
//                 printf("%d ",f[j+1]);
//             }
//             printf("\n");
//         }
//         return f[cols];
//     }
// };