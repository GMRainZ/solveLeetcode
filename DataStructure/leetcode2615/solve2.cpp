// class Solution 
// {
//     vector<long long>ans;
//     void getSumAbsoluteDifferences(const vector<int>& nums) 
//     {
//         const int n=nums.size();

//         int i;
//         long long prefix=0;
//         vector<long long>suffix(n+1);

//         for(i=n-1;i>=0;--i)suffix[i]=suffix[i+1]+nums[i];

//         for(i=0;i<n;++i)
//         {
//             ans[nums[i]]=suffix[i+1]-1LL*(n-i-1)*nums[i]+
//                 1LL*nums[i]*i-prefix;

//             prefix+=nums[i];
//         }

//         return ;
//     }
// public:

//     vector<long long> distance(vector<int> &nums) 
//     {

//         const int n = nums.size();
//         ans.assign(n,0);

//         unordered_map<int,vector<int>>value2index;
//         int i;
//         for(i=0;i<n;++i)value2index[nums[i]].emplace_back(i);
//         for(const auto&[k,v]:value2index)
//         {
//             getSumAbsoluteDifferences(v);
//         }

//         return ans;

//     }

// };
