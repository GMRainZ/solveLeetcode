// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         const int rows=matrix.size(),cols=matrix[0].size();

//         int i=0,j=cols-1;
//         while(i<rows && j>=0){
//             if(matrix[i][j]==target){
//                 return true;
//             }
//             if(matrix[i][j]<target){
//                 ++i;
//                 continue;
//             }
//             if(matrix[i][j]>target){
//                 --j;
//                 continue;
//             }
//         }

//         return false;
//     }
// };