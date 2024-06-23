// class Solution 
// {
//     const int D=10;
// public:
//     int longestAwesome(string s) 
//     {
//         const int n=s.size();
//         int ans=1,prefix=0;

//         vector<int>pos(1<<D,n);
//         pos[0]=-1;

//         int i,j;
//         for(i=0;i<n;++i)
//         {
//             prefix^=1<<(s[i]-'0');

//             for(j=0;j<10;++j)
//                 ans=max(ans,i-pos[prefix^(1<<j)]);

//             //相等的
//             ans=max(ans,i-pos[prefix]);

//             if(pos[prefix]==n)pos[prefix]=i;
//         }
    
//         return ans;
//     }
// };