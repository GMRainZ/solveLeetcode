// class Solution 
// {
// public:
//     int rob(vector<int>& nums) 
//     {
//         const int n=nums.size();

//         vector<int>f(n+1);
//         //f[0]=0;
        
//         int i;
//         for(i=0;i<n;++i)
//         {
//             f[i+1]=nums[i];
//             if(i>=1)f[i+1]=max(f[i],f[i-1]+nums[i]);

//         }

//         return f[n];
//     }
// };