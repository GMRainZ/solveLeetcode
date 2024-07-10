// class Solution 
// {
// public:
//     vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) 
//     {
//         const int n=s.length(),nq=queries.size();
//         vector<bool>ans(nq);

//         vector<array<int,26>>prefix(n+1);

//         int i;
//         for(i=0;i<n;++i)
//             prefix[i+1]=prefix[i],
//                 ++prefix[i+1][s[i]-'a'];
        
//         int j,len,nOdd;
//         //array<int,26>tmp;
//         for(i=0;i<nq;++i)
//         {
//             nOdd=0;
//             for(j=0;j<26;++j)
//             {
//                 //tmp[j]=prefix[queries[i][1]+1][j]-prefix[queries[i][0]][j];
//                 nOdd+=(prefix[queries[i][1]+1][j]-prefix[queries[i][0]][j])&1;
//             }
//             //总字母个数        奇数个字母的个数
//             len=queries[i][1]-queries[i][0]+1;
//             //nEven=len - nOdd
//             ans[i]=nOdd>>1 <= queries[i][2];
//         }

//         return ans;
//     }
// };