// class Solution {
// public:
//     int findLength(vector<int>& nums1, vector<int>& nums2) {
//         const int n1=nums1.size(),n2=nums2.size();
        
//         vector<vector<int>>f(n1+1,vector<int>(n2+1));


//         int i,j,ans=0;
//         for(i=0;i<n1;++i){
//             for(j=0;j<n2;++j){
//                 if(nums1[i]==nums2[j]){
//                     f[i+1][j+1]=max(f[i][j]+1,f[i+1][j+1]);
//                 }
//                 ans=max(ans,f[i+1][j+1]);
//             }
//         }
        


//         return ans;
//     }
// };