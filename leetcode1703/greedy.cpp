// class Solution 
// {
// public:
//     int minMoves(vector<int>& nums, int k) 
//     {
//         const int n=nums.size();
//         int i;

//         vector<int>indices;

//         for(i=0;i<n;++i)
//             if(nums[i])indices.emplace_back(i-indices.size());
        
//         const int nOnes=indices.size();

//         vector<int>prefix(nOnes+1);
//         for(i=0;i<nOnes;++i)//prefix[i]表示前i个移动到一起需要的代价
//             prefix[i+1]=prefix[i]+indices[i];
        


//         auto dist_sum=[&](int l,int i,int r)->int
//         {   
//             return prefix[l]+prefix[r]-prefix[i]*2-indices[i]*(k&1);
//         };

//         //枚举左右端点，然后中位数贪心
//         int ans=INT_MAX,left;
//         for(left=0,i=k;i<=nOnes;++left,++i)
//             ans=min(ans,dist_sum(left,(left+i)>>1),i));
        

//         return ans;
//     }

// };