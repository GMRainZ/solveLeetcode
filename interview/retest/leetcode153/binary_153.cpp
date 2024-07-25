// class Solution {
// public:
//     int findMin(vector<int>& nums)  {
//         int len=nums.size(),lo=0,hi=len-1,mid;

//         while(lo<hi)
//         {
//             mid=(lo+hi)>>1;
//             if(nums[mid]<=nums[len-1])hi=mid;
//             else lo=mid+1;
//         }
//         return nums[lo];
//     }
// };