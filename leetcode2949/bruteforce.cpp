// class Solution 
// {
//     //判断字符c是否为元音字母
//     bool isVowel(char c)
//     {
//         return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
//     }

// public:
//     //计算 Beautiful Substrings 的数量
//     long long beautifulSubstrings(string s, int k) 
//     {
//         const int n=s.size();
//         long long ans=0,t;
//         //存储前缀和
//         vector<long long>prefix(n+1);
//         //unordered_map<int,int>hash;

//         int i;
//         for(i=0;i<n;++i)
//         {
//             prefix[i+1]=prefix[i]+isVowel(s[i]);
//             t=prefix[i+1];
//             //if(hash[])
//             while(t)
//             {
//                 if(t*2 > i+1)
//                 {
//                     --t;
//                     continue;
//                 }

//                 if(prefix[i+1]-prefix[i+1-2*t]==t && (t*t)%k==0)
//                     ++ans;
//                 --t;
//             }
//             //++hash[prefix];

//         }

//         return ans;
//     }
// };