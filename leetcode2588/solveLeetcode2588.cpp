// class Solution {
// public:
//     long long beautifulSubarrays(vector<int>& nums) 
//     {
//         const int n=nums.size();
//         unordered_map<int,int>hash;
//         hash[0]=1;

//         int prefix=0;
//         long long ans=0;
//         for(int i=0;i<n;++i)
//         {
//             prefix^=nums[i];

//             if(hash.count(prefix))ans+=hash[prefix];
//             ++hash[prefix];
//         }

//         return ans;
//     }
// };