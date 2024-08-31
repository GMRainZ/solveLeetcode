// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         const int n=nums.size();
//         vector<int>f(n,0x3f3f3f3f);

//         f[0]=0;
//         for(int i=0;i<n;++i){
//             for(int j=1;j<=nums[i];++j){
//                 if(i+j>=n)break;
//                 f[i+j]=min(f[i+j],f[i]+1);
//             }
//         }

//         return f[n-1];
//     }
// };