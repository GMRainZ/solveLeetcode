// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         const int n=matrix.size();

//         int i,j;
//         for(i=0;i<n;++i){
//             for(j=0;j<i;++j){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }

//         for(i=0;i<n;++i){
//             for(j=0;j<n>>1;++j){
//                 swap(matrix[i][j],matrix[i][n-j-1]);
//             }
//         }

//         // return matrix;
//     }
// };