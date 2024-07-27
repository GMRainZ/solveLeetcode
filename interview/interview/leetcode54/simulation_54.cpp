// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         const int rows=matrix.size(),cols=matrix[0].size(),cnt_element=rows*cols;
//         int left_bound=0,right_bound=cols-1,up_bound=0,bottom_bound=rows-1;
//         int i,cnt=0;
//         /*
//             0
//         3        1
//             2
//         */
//         vector<int>ans;
        
//         while(cnt<cnt_element){
//             for(i=left_bound;cnt<cnt_element&&i<=right_bound;++i){
//                 ans.emplace_back(matrix[up_bound][i]);
//                 ++cnt;
//             }
//             ++up_bound;
            
//             for(i=up_bound;cnt<cnt_element&&i<=bottom_bound;++i){
//                 ans.emplace_back(matrix[i][right_bound]);
//                 ++cnt;
//             } 
//             --right_bound;

//             for(i=right_bound;i>=left_bound && cnt<cnt_element;--i){
//                 ans.emplace_back(matrix[bottom_bound][i]);
//                 ++cnt;
//             }
//             --bottom_bound;

//             for(i=bottom_bound;i>=up_bound && cnt<cnt_element;--i){
//                 ans.emplace_back(matrix[i][left_bound]);
//                 ++cnt;
//             }
//             ++left_bound;
//         }


//         return ans;
//     }
// };