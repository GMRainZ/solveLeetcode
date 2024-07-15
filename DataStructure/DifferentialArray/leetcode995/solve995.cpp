// class Solution {
// public:
//     int minKBitFlips(vector<int>& nums, int k) 
//     {
//         const int n=nums.size();

//         vector<int>diff(n+1);

//         int flip=0,ans=0;
//         for(int i=0;i<n;++i)
//         {
//             flip+=diff[i];
//             if((flip&1)^nums[i])continue;
//             if(i+k>n)return -1;

//             ++diff[i];
//             --diff[i+k];
//             ++flip;

//             ++ans;
//         }

//         return ans;
//     }
// };








