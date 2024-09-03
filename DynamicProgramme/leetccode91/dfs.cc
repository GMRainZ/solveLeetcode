// class Solution {
// public:
//     int numDecodings(string s) {
//         const int n=s.size();

//         int ans=0;
//         function<void(int)>dfs=[&](int  i){
//             if(i>=n){
//                 if(i==n)++ans;
//                 return;
//             }
//             if(s[i]=='0'){
//                 return;
//             }
//             int x=0;
//             for(int j=1;j<=2;++j){
//                 x=x*10+s[i+j-1]-'0';
//                 if(x>26)break;
//                 dfs(i+j);
//             }
//         };

//         dfs(0);

//         return ans;
//     }
// };