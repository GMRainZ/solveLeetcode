// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         const int n=nums.size();
//         bool dp[n];
//         memset(dp,0,sizeof dp);

//         dp[0]=true;
//         int i,j;
//         for(i=0;i<n;++i){
//             for(j=1;j<=nums[i] && i+j<n;++j){
//                 dp[i+j]|=dp[i];
//             }
//         }

//         return dp[n-1];
//     }
// };