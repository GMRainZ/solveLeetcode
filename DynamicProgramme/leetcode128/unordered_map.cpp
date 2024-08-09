// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_map<int,int>right_bound;
//         for(const int&x:nums)right_bound[x]=x;


//         int ans=0,right;
//         for(const int&x:nums){
//             if(right_bound.count(x-1)){
//                 continue;
//             }
//             right=right_bound[x];
//             while(right_bound.count(right+1)){
//                 right=right_bound[right+1];
//             }
//             right_bound[x]=right;
        

//             ans=max(ans,right-x+1);
//         }   
    
//         return ans;
//     }
// };