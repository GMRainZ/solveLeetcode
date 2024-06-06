// class Solution 
// {
// public:
//     int maxNonOverlapping(vector<int>& nums, int target) 
//     {
//         int prefix=0;
//         unordered_map<int,int>hash{{0,1}};


//         int ans=0,t;
//         for(const auto&x:nums)
//         {
//             prefix+=x;

//             t=prefix-target;
//             if(hash.count(t))
//             {
//                 hash=unordered_map<int,int>{{0,1}};
//                 ++ans;
//                 prefix=0;
//             }
//             else ++hash[prefix];

//             //printf("%-3d",prefix);
//         }
//         //printf("\n");
//         return ans;
//     }
// };