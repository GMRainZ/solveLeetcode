// class Solution 
// {
// public:
//     bool checkArray(vector<int>& nums, int k) 
//     {
//         const int n=nums.size();
//         vector<int>diff(n+1);

//         int i,sum_diff=0;
//         for(i=0;i<n;++i)
//         {
//             sum_diff+=diff[i];
//             int x=nums[i];

//             x+=sum_diff;
//             if(!x)continue;

//             if(x<0 || i+k>n)return false;
//             sum_diff-=x;
//             diff[i+k]+=x;
//         }


//         return true;
//     }
// };