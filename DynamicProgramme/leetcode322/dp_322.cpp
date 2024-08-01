// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         const int n=coins.size(),inf=0x3f3f3f3f;

//         vector<int>f(amount+1,inf);
//         f[0]=0;
//         int i,j;
//         for(i=0;i<n;++i){
//             // f[coins[i]]=min(f[coins[i]],1);
//             for(j=coins[i];j<=amount;++j){
//                 f[j]=min(f[j],f[j-coins[i]]+1);
//             }
//         }

//         return f[amount]<inf?f[amount]:-1;
//     }
// };