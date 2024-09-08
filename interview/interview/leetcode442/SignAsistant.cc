// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         const int n=nums.size();

//         vector<int>ans;
//         int i,index;
//         for(i=0;i<n;++i){
//             index=abs(nums[i])-1;
//             if(nums[index]>0){
//                 nums[index]=-nums[index];
//             }else{
//                 ans.emplace_back(index+1);
//             }
//         }

//         return ans;
//     }
// };