// class Solution {
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
//         const int rows=nums.size(),cols=nums[0].size(),total_n=rows*cols,
//             total_trip=rows+cols;

//         int x,y,n=0;
//         vector<int>ans;
//         while(n<total_trip){
//             //根据方向确定初始值
//             x=n<rows?n:rows-1;
//             y=n-x;

//             while(x>=0 && y<cols){
//                 ans.emplace_back(nums[x][y]);
//                 --x,++y;
//             }

//             ++n;
//             if(n>=total_trip){
//                 break;
//             }

//             y=n<cols?n:cols-1;
//             x=n-y;

//             while(y>=0 && x<rows){
//                 ans.emplace_back(nums[x][y]);
//                 ++x,--y;
//             }
//             ++n;
//         }

//         return ans;
//     }
// };