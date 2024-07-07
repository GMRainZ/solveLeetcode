// #include<vector>

// using namespace std;

// class Solution 
// {
// public:
//     int sumOfFlooredPairs(vector<int>& nums) 
//     {
//         const int n=nums.size(),mod=1e9+7,maxn=2e5;
//         vector<int>prefix(maxn+2),cnt(maxn+1);
//         int i,ans=0;

//         for(i=0;i<n;++i)++cnt[nums[i]];
//         for(i=1;i<=maxn;++i)prefix[i+1]=prefix[i]+cnt[i];
//         //prefix[i]表示数组中小于等于i的元素个数的前缀和

//         int mutiple;
//         for(i=1;i<=maxn;++i)
//         {
//             if(!cnt[i])continue;
//             for(mutiple=1;mutiple*i<=1e5;++mutiple)
//                 ans=((long long)ans+(long long)(prefix[(mutiple+1)*i]-prefix[mutiple*i])*mutiple*cnt[i])%mod;
//                 //floor(x/i)的个数是mutiple，floor(x/i)的个数的前缀和是prefix[mutiple*i]-prefix[(mutiple-1)*i-1]
                
//             //floor(x/i)的个数的前缀和是prefix[mutiple*i]-prefix[mutiple*i-1]
//         }


//         return ans;
//     }
// };