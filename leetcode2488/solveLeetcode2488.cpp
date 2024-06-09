// class Solution {
// public:
//     int countSubarrays(vector<int>& nums, int k) 
//     {
//         int pos=find(nums.cbegin(),nums.cend(),k)-nums.cbegin();
//         const int n=nums.size();

//         //隐含点1：有且仅有一个k
//         //隐含点2：子数组（连续）

//         unordered_map<int,int>hash{{0,1}};
//         int i,x;
//         for(i=pos-1,x=0;i>=0;--i)
//         {
//             nums[i]<k?++x:--x;
//             ++hash[x];
//         }

//         int ans=hash[0]+hash[-1];
//         for(i=pos+1,x=0;i<n;++i)
//         {
//             nums[i]>k?++x:--x;
//             ans+=hash[x]+hash[x-1];
//         }

//         return ans;
//     }
// };