// class Solution {
// public:
//     bool wordBreak(string s, vector<string>& wordDict) {
//         const int n=s.size();
//         vector<bool>visted(n);
//         // unordered_map<int,bool>success;
//         unordered_set<string>wordMap;

//         for(const string&word:wordDict)wordMap.insert(word);

//         queue<int>q;
//         q.emplace(0);

//         while(!q.empty()){
//             int start=q.front();
//             q.pop();

//             if(start>=n)return true;

//             if(visted[start]){
//                 continue;
//             }
//             visted[start]=true;

//             for(int i=start+1;i<=n;++i){
//                 if(wordMap.find(s.substr(start,i-start))==wordMap.end())continue;
//                 q.emplace(i);
//             }

//         }

//         return false;
//     }
// };