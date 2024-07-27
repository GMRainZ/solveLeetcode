// class Solution {
//     int search_min_index(const vector<int>&nums){
        
//         int lo=0,hi=nums.size()-1,mid;
//         while(lo<hi){
//             mid=(lo+hi)>>1;
//             if(nums[mid]>nums.back())lo=mid+1;
//             else hi=mid;
//         }

//         return lo;
//     }

//     int search_target(const vector<int>&nums,int lo,int hi,const int target){
//         int mid;
//         while(lo<hi){
//             mid=(lo+hi)>>1;
//             if(nums[mid]>=target)hi=mid;
//             else lo=mid+1;
//         }

//         return nums[lo]==target?lo:-1;
//     }
// public:
//     int search(vector<int>& nums, int target) {
//         int min_index=search_min_index(nums);

//         // printf("min_index = %d",min_index);

//         if(target>nums.back())return search_target(nums,0,min_index-1,target);
//         return search_target(nums,min_index,nums.size()-1,target);
//     }
// };