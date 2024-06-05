// class Solution {
// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) 
//     {
        
//         unordered_map<int,long long>minprefixSum;

//         long long prefix=0,ans=LLONG_MIN;
        
//         for(const auto&x:nums)
//         {


//             if(minprefixSum.count(x))
//                 minprefixSum[x]=min(minprefixSum[x],prefix);
//             else minprefixSum[x]=prefix;

//             prefix+=x;

//             if(minprefixSum.count(x-k))
//                 ans=max(ans,prefix-minprefixSum[x-k]);
//             if(minprefixSum.count(x+k))
//                 ans=max(ans,prefix-minprefixSum[x+k]);

//         }

//         return ans>LLONG_MIN?ans:0;
//     }
// };