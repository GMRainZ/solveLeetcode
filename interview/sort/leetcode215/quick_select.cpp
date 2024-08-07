// class Solution {
//     int quick_select(vector<int>& nums,int lo,int hi,int k){
//         if(lo>=hi){
//             return nums[lo];
//         }

//         int partion=nums[lo],i=lo-1,j=hi+1;
//         while(i<j){
//             do ++i;while(nums[i]>partion);
//             do --j;while(nums[j]<partion);

//             if(i<j)swap(nums[i],nums[j]);
//         }
        
//         if(k<=j)return quick_select(nums,lo,j,k);
//         return quick_select(nums,j+1,hi,k);
//     }
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         const int n=nums.size();
//         return quick_select(nums,0,n-1,k-1);
//     }
// };

// /*
// 官解用的快排应该是属于快排中的二路排序。
// 常规的快排，我们按照基准值划分区间，是将一个区间，划分成了左区间、基准值、右区间。
// 其中左区间是小于基准值，右区间是大于基准值。
// 即[left,right]划分成了[left,j - 1]、j、[j + 1, right]


// 所以当区间中出现很多与基准值一样的结果时，会导致左区间和右区间划分不平衡。
// 比如一个区间全都是1，基准值为1时，划分的结果就会出现，左区间或右区间只有一个元素，另一个区间有n-2个元素，导致时间复杂度退化成了O(n^2)。

// 而官解是按照基准值，将一个区间，划分成了左区间、右区间。
// 其中左区间是小于等于基准值，右区间是大于等于基准值。
// 即[left, right]划分成了[left,j] 和 [j + 1, right]
// 这样可以确保左区间和右区间的长度尽可能的平均。
// */