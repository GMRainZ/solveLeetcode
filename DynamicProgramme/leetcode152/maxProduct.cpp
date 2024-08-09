// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         const int n=nums.size();
//         int imax=1,imin=1,ans=INT_MIN;


//         for(int i=0;i<n;++i){
//             if(nums[i]<0)swap(imax,imin);

//             imax=max(imax*nums[i],nums[i]);
//             imin=(int)min(1LL*imin*nums[i],nums[i]*1LL);
        
//             ans=max(ans,imax);
//         }

//         return ans;
//     }

// };