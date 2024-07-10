// class Solution 
// {
// public:
//     int countTriplets(vector<int>& arr) 
//     {
//         const int n=arr.size();
//         int prefix=0;
        
//         unordered_map<int,vector<int>>hash{{0,{-1}}};

//         int i,ans=0;
//         for(i=0;i<n;++i)
//         {
//             prefix^=arr[i];

//             if(hash.count(prefix))
//             {
//                 for(const int&idx:hash[prefix])
//                     ans+=i-idx-1;
                
//             }
//             hash[prefix].emplace_back(i);
//         }

//         return ans;
//     }
// };






//brute force
// class Solution 
// {
// public:
//     int countTriplets(vector<int>& arr) 
//     {
//         const int n=arr.size();
//         vector<int>prefix(n+1);

//         int i;
//         for(i=0;i<n;++i)
//             prefix[i+1]=prefix[i]^arr[i];

//         int j,k,a,b,ans=0;
//         for(i=0;i<n;++i)
//         {
//             for(j=i+1;j<n;++j)
//             {
//                 a=prefix[j]^prefix[i];
//                 for(k=j;k<n;++k)
//                 {
//                     b=prefix[k+1]^prefix[j];

//                     if(a==b)++ans;
//                 }
//             }
//         }

//         return ans;
//     }
// };