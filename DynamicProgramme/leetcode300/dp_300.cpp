// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         const int n=nums.size();
//         vector<int>f(n,1);

//         int i,j,ans=1;
//         for(i=0;i<n;++i){
//             for(j=i-1;j>=0;--j){
//                 if(nums[j]<nums[i])
//                     f[i]=max(f[i],f[j]+1);
//             }

//             ans=max(f[i],ans);
//         }

//         return ans;
//     }
// };