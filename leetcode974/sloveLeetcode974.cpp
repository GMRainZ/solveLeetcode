// class Solution 
// {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) 
//     {
//         unordered_map<int,int>hash={{0,1}};

//         const int n=nums.size();
//         int i,sum=0,modulus,ans=0;
//         for(i=0;i<n;++i)
//         {
//             sum+=nums[i];
//             modulus=(sum%k + k)%k;

//             //count return 1:key exist return 0:key non-exist
//             if(hash.count(modulus))
//                 ans+=hash[modulus];
//             ++hash[modulus];
//         }    

//         return ans;
//     }
// };