// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         const int n=nums.size();
//         int left=0,right=0,ans=n+1,sum=0;

//         while(right<n){
//             while(right<n && sum<target)sum+=nums[right++];
//             // if(sum>=target)ans=max(ans,right-left);

//             while(left<right && sum>=target){
//                 ans=min(ans,right-left);
//                 printf("left=%d right=%d\n",left,right);
//                 sum-=nums[left++];
//             }
//         }
    
    
//         return ans<=n ? ans : 0;
//     }

// };