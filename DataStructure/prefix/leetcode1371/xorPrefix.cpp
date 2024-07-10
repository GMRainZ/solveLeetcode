// class Solution 
// {
// public:
//     int findTheLongestSubstring(string s) 
//     {
//         const int vowelsBase=1065233,n=s.length();
        
//         int i,t,prefix=0,ans=0;
//         unordered_map<int,int>hash{{0,-1}};

//         for(i=0;i<n;++i)
//         {
//             prefix^=1<<(s[i]-'a');
            
//             t=prefix&vowelsBase;
//             if(hash.count(t))
//                 ans=max(ans,i-hash[t]);
//             else hash[t]=i;
//         }

//         return ans;
//     }
// };