// class Solution 
// {
// public:
//     int findMaxLength(vector<int>& nums) 
//     {
//         const int n=nums.size();
//         unordered_map<int,int>hash;
//         hash[0]=-1;

//         int prefix=0,ans=0;
//         for(int i=0;i<n;++i)
//         {
//             prefix+=(nums[i]?1:-1);

//             if(hash.count(prefix))
//                 ans=max(ans,i-hash[prefix]);
//             else hash[prefix]=i;
//         }

//         return ans;
//     }
// };