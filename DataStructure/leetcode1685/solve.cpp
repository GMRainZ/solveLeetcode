// class Solution 
// {
// public:
//     // 计算数组nums中每个元素与nums的总和之间的绝对差值
//     vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
//     {
//         // 获取数组nums的长度
//         const int n=nums.size();

//         // 初始化前缀和变量prefix
//         int i,prefix=0;
//         // 初始化一个长度为n+1的suffix数组
//         vector<int>suffix(n+1),res(n);

//         // 计算suffix数组
//         for(i=n-1;i>=0;--i)suffix[i]=suffix[i+1]+nums[i];

//         // 计算res数组
//         for(i=0;i<n;++i)
//         {
//             // 计算res[i]
//             res[i]=suffix[i+1]-(n-i-1)*nums[i]+
//                 nums[i]*i-prefix;

//             // 更新prefix
//             prefix+=nums[i];
//         }

//         return res;
//     }
// };