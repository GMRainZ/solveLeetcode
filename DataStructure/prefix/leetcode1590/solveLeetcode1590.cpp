// class Solution 
// {
// public:
//     int minSubarray(vector<int>& nums, int p) 
//     {
//         if(p==1)return 0;
//         const int n=nums.size();

//         int sum=accumulate(nums.cbegin(),nums.cend(),0LL)%p;
//         //sum%=p;
        
//         int prefix=0;

//         unordered_map<int,int>hash{{0,-1}};
//         //hash[0]=1;

//         int ans=n,t;
//         for(int i=0;i<n;++i)
//         {
//             prefix=(prefix+nums[i])%p;
//             hash[prefix]=i;

//             t=(prefix-sum+p)%p;
//             if(hash.count(t))
//                 ans=min(ans,i-hash[t]);   
//         }

//         return ans<n?ans:-1;
//     }   
// };