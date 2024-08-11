// class Solution {
// public:
//     bool wordBreak(string s, vector<string>& wordDict) {
//         const int n=s.size();
//         // vector<bool>visted(n);
//         // unordered_map<int,bool>success;
//         unordered_set<string>wordMap;
//         for(const string&word:wordDict)wordMap.insert(word);

//         vector<bool>dp(n+1,false);

//         dp[0]=true;
//         for(int i=1;i<=n;++i){
//             if(dp[i])continue;
//             for(int j=i-1;j>=0;--j){
//                 if(dp[j] && wordMap.find(s.substr(j,i-j))!=wordMap.end()){
//                     printf("i=%d",i);
//                     dp[i]=true;
//                     break;
//                 }
//             }
//         }

//         return dp[n];
//     }
// };