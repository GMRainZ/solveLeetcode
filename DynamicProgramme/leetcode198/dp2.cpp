// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         const int n=nums.size();
//         vector<int>f(n+1);
//         f[1]=nums[0];

//         int i,ans=f[1];
//         for(i=1;i<n;++i){
//             f[i+1]=max(f[i],f[i-1]+nums[i]);
            
//             ans=max(ans,f[i+1]);
//         }
//         return ans;
//     }
// };