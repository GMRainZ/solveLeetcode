// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         const int n=nums.size();
//         if(n<=1)return;


//         int i,j;
//         for(i=n-2;i>=0&&nums[i]>=nums[i+1];--i);

//         if(i>=0)
//         {
//             for(j=n-1;j>i && nums[j]<=nums[i];--j);

//             swap(nums[i],nums[j]);
//         }


//         reverse(nums.begin() + i + 1, nums.end());
//         // sort(nums.begin()+i,nums.end());

//         // return nums;
//     }
// };