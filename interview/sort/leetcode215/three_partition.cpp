// class Solution {
//     int quick_select(vector<int>& nums,int lo,int hi,int k){
//         if(lo>=hi){
//             return nums[lo];
//         }

//         int pivot=nums[lo],lt=lo,i=lo+1,gt=hi;
//         while(i<=gt){
//             if(nums[i]>pivot)swap(nums[lt++],nums[i++]);
//             else if(nums[i]<pivot)swap(nums[gt--],nums[i]);
//             else ++i;
//         }
        
//         int pivotCount=gt-lt+1;
//         if(k + lo < lt)return quick_select(nums,lo,lt-1,k);
//         else if(k + lo > gt)return quick_select(nums,gt+1,hi,k-pivotCount);
//         else return nums[lt];
//     }
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         const int n=nums.size();
//         return quick_select(nums,0,n-1,k-1);
//     }
// };