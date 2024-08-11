// class Solution {
// public:
//     bool wordBreak(string s, vector<string>& wordDict) {
//         unordered_map<int,bool>success;

//         const int n=s.length();
        

//         function<bool(int)>dfs=[&](int start){
//             if(start>=n){
//                 return true;
//             }

//             if(success.count(start)){
//                 return success[start];
//             }
//             for(int i=start;i<n;++i){
//                 if(find(wordDict.cbegin(),wordDict.cend(),s.substr(start,i-start+1))!=wordDict.cend() && dfs(i+1)){
//                     return success[start]=true;
//                 }
//             }
//             return success[start]=false;
//         };


//         return dfs(0);
//     }
// };