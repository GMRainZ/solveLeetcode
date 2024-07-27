// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         const int n=nums.size();
//         vector<int>g;

//         vector<int>::iterator it;
//         for(int i=0;i<n;++i){
//             it=lower_bound(g.begin(),g.end(),nums[i]);
//             if(it==g.end()){
//                 g.emplace_back(nums[i]);
//             }else{
//                 *it=nums[i];
//             }
//         }


//         return g.size();
//     }
// };