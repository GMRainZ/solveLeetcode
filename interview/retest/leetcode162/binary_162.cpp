// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int lo=0,hi=nums.size()-1,mid;
//         while(lo<hi){
//             mid=(lo+hi)>>1;
//             if(nums[mid]<nums[mid+1])lo=mid+1;
//             else hi=mid;
//         }

//         return lo;
//     }
// };

//证明过程可见灵茶山艾府的题解