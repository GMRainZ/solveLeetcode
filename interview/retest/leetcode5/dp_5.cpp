// class Solution {
// public:
//     string longestPalindrome(string s) {
//         const int n=s.size();
//         if(n<=1)return s;

//         bool dp[n][n];
//         memset(dp,0,sizeof dp);

//         int i,j,maxLen=0,start;
//         for(i=n-1;i>=0;--i){
//             for(j=i;j<n;++j){
//                 if(i==j)dp[i][j]=true;
//                 else if(j-i<=2)dp[i][j]=s[i]==s[j];
//                 else dp[i][j]=(s[i]==s[j])&&dp[i+1][j-1];

//                 if(dp[i][j]&&j-i+1>maxLen){
//                     start=i;
//                     maxLen=j-i+1;
//                 }
//             }
//         }

//         return s.substr(start,maxLen);
//     }
// };