// class Solution {
//     int slove(vector<int>&nums,int target)
//     {
//         int len=nums.size(),lo=0,hi=len-1,mid;
//         while(lo<=hi)
//         {
//             mid=(lo+hi)>>1;
//             if(nums[mid]>=target)hi=mid-1;
//             else lo=mid+1;
//         }
//         return lo;
//     }

// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int len=nums.size();
//         int start=slove(nums,target);
//         if(start==len||nums[start]!=target)return {-1,-1};
//         int end=slove(nums,target+1)-1;

//         return {start,end};
//     }
// };