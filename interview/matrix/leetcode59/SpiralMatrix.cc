// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>>grid(n,vector<int>(n));
//         const int n2=n*n;
//         int i,up=0,bottom=n-1,left=0,right=n-1,num=1;
    
//         while(num<=n2){
//             for(i=left;i<=right;++i){
//                 grid[up][i]=num++;                
//             }
//             ++up;
//             for(i=up;i<=bottom;++i){
//                 grid[i][right]=num++;
//             }
//             --right;
//             for(i=right;i>=left;--i){
//                 grid[bottom][i]=num++;
//             }
//             --bottom;
//             for(i=bottom;i>=up;--i){
//                 grid[i][left]=num++;
//             }
//             ++left;
//         }

//         return grid;
//     }
// };