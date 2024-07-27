// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         const int n=nums.size();
//         vector<int>f(n,-1);
        
//         function<int(int)>dfs=[&](int i)->int{
//             if(i<0){
//                 return 0;
//             }
//             int&res=f[i];
//             if(res!=-1)return res;
//             res=0;

//             for(int j=i-1;j>=0;--j){
//                 if(nums[j]<nums[i]){
//                     res=max(res,dfs(j));
//                 }
//             }

//             return ++res;
//         };

//         int ans=0;
//         for(int i=n-1;i>=0;--i)
//             ans=max(ans,dfs(i));

//         return ans;
//     }
// };