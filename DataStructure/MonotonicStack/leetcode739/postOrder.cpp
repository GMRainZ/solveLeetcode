// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& nums) {
//         const int n=nums.size();
//         stack<int>stk;
//         vector<int>ans(n);


//         int i;
//         for(i=n-1;i>=0;--i){
//             while(!stk.empty() && nums[i]>=nums[stk.top()]){
//                 stk.pop();
//             }
//             if(stk.empty()){
//                 ans[i]=0;
//                 // continue;
//             }
//             else if(nums[i] < nums[stk.top()]){
//                 ans[i]=stk.top()-i;
//                 // stk.pop();
//             }
//             stk.emplace(i);
//         }
//         return ans;
//     }
// };