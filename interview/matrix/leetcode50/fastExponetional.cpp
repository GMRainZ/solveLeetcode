// class Solution {
// public:
//     double myPow(double x, int N) {
//         double ans=1;
//         long long n = N;
//         if (n < 0) { // x^-n = (1/x)^n
//             n = -n;
//             x = 1 / x;
//         }

//         while(n){
//             if(n&1)ans*=x;
//             n>>=1;
//             x*=x;
//         }

//         return ans;
//     }
// };