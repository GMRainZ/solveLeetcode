// class Solution 
// {
// public:
//     // 定义一个函数，输入为数组nums和查询数组queries，返回值为一个数组
//     vector<int> xorQueries(vector<int>& nums, vector<vector<int>>& queries) 
//     {
//         // 定义一个前缀数组，用于存储nums数组中每个元素的前缀异或值
//         const int n=nums.size();
//         vector<int>prefix(n+1);

//         // 遍历nums数组，计算前缀异或值
//         int i;
//         for(i=0;i<n;++i)
//             prefix[i+1]=prefix[i]^nums[i];
        
//         // 定义一个数组，用于存储查询结果
//         const int n_q=queries.size();
//         vector<int>ans(n_q);
//         // 遍历查询数组，计算每个查询的结果
//         for(i=0;i<n_q;++i)
//         {
//             // 计算queries[i][1]+1的前缀异或值与queries[i][0]的前缀异或值
//             ans[i]=prefix[queries[i][1]+1]^prefix[queries[i][0]];
//         }

//         // 返回查询结果
//         return ans;
//     }
// };