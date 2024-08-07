// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         const int last_element=nums.back();
//         auto is_blue=[&](int i){
//             if(nums[i]>last_element)
//                 return target>last_element && nums[i]>=target;

//             return target>last_element || nums[i]>=target; 
//         };  


//         int lo=0,hi=nums.size()-1,mid;
//         while(lo<hi){
//             mid=(lo+hi)>>1;
//             if(is_blue(mid))hi=mid;
//             else lo=mid+1;
//         }

//         return nums[lo]==target?lo:-1;
//     }
// };