// class Solution {
// public:
//     int maximalSquare(vector<vector<char>>&matrix){
//         const int m=matrix.size(),n=matrix[0].size();
//         vector<vector<int>>sum(m+1,vector<int>(n+1));
//         int i,j,len=min(m,n);
//         for(i=0;i<m;++i) 
//             for(j=0;j<n;++j)
//                 sum[i+1][j+1]=sum[i+1][j]+sum[i][j+1]-sum[i][j]+matrix[i][j]-'0';
       
//        int ans=0;
//        for(int k=0;k<len;++k)
//        {
//            for(i=0;i+k<m;++i)
//            {
//                for(j=0;j+k<n;++j)
//                {
//                    if(sum[i+k+1][j+k+1]-sum[i+k+1][j]-sum[i][j+k+1]+sum[i][j]==(k+1)*(k+1))ans=ans<k+1?k+1:ans;
//                }
//            }
//        }
       
       
//        return ans*ans;
//     }
// };