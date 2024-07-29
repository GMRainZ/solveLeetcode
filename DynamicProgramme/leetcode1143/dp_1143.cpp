// class Solution 
// {
// public:
//     int longestCommonSubsequence(string t1, string t2) 
//     {
//         const int n1=t1.size(),n2=t2.size();

//         vector<vector<int>>f(n1+1,vector<int>(n2+1));

//         int i,j;
//         for(i=0;i<n1;++i)
//         {
//             for(j=0;j<n2;++j)
//             {
//                 if(t1[i]==t2[j])f[i+1][j+1]=f[i][j]+1;
//                 else f[i+1][j+1]=max(f[i][j+1],f[i+1][j]);
//             }
//         }

//         return f[n1][n2];
//     }
// };