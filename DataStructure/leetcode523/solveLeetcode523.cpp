// class Solution 
// {
// public:
//     bool checkSubarraySum(vector<int>& nums, int k) 
//     {
//         const int n=nums.size();
//         if(n<2)return false;

//         unordered_map<int,int>hash;
//         hash[0]=-1;


//         int i,reminder=0,preIndex;
//         for(i=0;i<n;++i)
//         {
//             reminder=(reminder+nums[i])%k;
//             if(hash.count(reminder))
//             {
//                 preIndex=hash[reminder];
//                 if(i-preIndex>=2)return true;
//             }
//             else hash[reminder]=i;
            
//         }

//         return false;
//     }
// };