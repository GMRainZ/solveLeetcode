// class Solution {
// public:
//     int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) 
//     {
//         const int n=nums.size(),mod=1e9+7;
//         sort(nums.rbegin(),nums.rend());

//         vector<int>diff(n+1);

//         for(const auto&request:requests)
//             ++diff[request[0]],--diff[request[1]+1];

//         int i;
//         for(i=0;i<n;++i)diff[i+1]+=diff[i];
//         sort(diff.rbegin(),diff.rend());


//         int ans=0;
//         for(i=0;i<n;++i) 
//             ans=((long long)ans+1LL*diff[i]*nums[i])%mod;
        

//         return ans;
//     }
// };