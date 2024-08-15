// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         const int rows=matrix.size(),cols=matrix[0].size();
        
//         int i;
//         for(i=0;i<rows;++i){
//             if(target > matrix[i].back()){
//                 continue;
//             }

//             auto pos=lower_bound(matrix[i].cbegin(),matrix[i].cend(),target);

//             return *pos==target;
//         }



//         return false;
//     }
// };