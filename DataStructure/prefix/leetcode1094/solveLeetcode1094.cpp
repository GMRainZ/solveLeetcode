// class Solution 
// {
// public:
//     bool carPooling(vector<vector<int>>& trips, int capacity) 
//     {
//         vector<int>diff(1007);

//         for(const auto&trip:trips)
//         {
//             diff[trip[1]+1]+=trip[0];
//             diff[trip[2]+1]-=trip[0];
//         }

//         int i;
//         for(i=0;i<1006;++i)
//         {
//             diff[i+1]+=diff[i];
//             if(diff[i+1]>capacity)return false;
//         }

//         return true;
//     }
// };