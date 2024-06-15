// class Solution 
// {
//     int p_sqrt(int n)
//     {
//         int i,i2,ans=1;
//         for(i=2;i*i<=n;++i)
//         {
//             i2=i*i;
//             while(n%i2==0)
//             {
//                 ans*=i;
//                 n/=i2;
//             }
//             if(n%i==0)
//             {
//                 ans*=i;
//                 n/=i;
//             }
//         }
//         if(n>1)
//             ans*=n;
//         return ans;
//     }

//     const int AEIOU_MASK=1065233;
// public:
//     long long beautifulSubstrings(string s, int k) 
//     {
//         k=p_sqrt(4*k);
//         const int n=s.length();

//         int prefix=n;

//         unordered_map<int,int>hash;
//         ++hash[(k-1)<<17|prefix];
//         int i,bit,ans=0;
//         for(i=0;i<n;++i)
//         {
//             bit=(AEIOU_MASK>>(s[i]-'a'))&1;
//             prefix+=bit*2-1;

//             ans+=hash[(i%k)<<17 | prefix]++;
//         }
//         return ans;
//     }
// };