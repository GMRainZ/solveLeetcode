// class Solution {
// public:
//     string removeKdigits(string s, int k) {
//         const int n=s.size();
//         string ans;
//         ans.push_back(s[0]);

//         int i;
//         for(i=1;i<n && k;++i){
//             // if(s[i]>=ans.back()){
//             //     ans.push_back(s[i]);
//             //     continue;
//             // }

//             while(k && !ans.empty() && s[i]<ans.back()){
//                 ans.pop_back();
//                 --k;
//             }
//             ans.push_back(s[i]);
//         }
//         ans+=s.substr(i);
//         ans=ans.substr(0,ans.size()-k);
//         for(i=0;ans[i]=='0';++i);



//         return i==ans.size()?"0":ans.substr(i);
//     }
// };