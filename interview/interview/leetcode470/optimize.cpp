// // The rand7() API is already defined for you.
// // int rand7();
// // @return a random integer in the range 1 to 7

// class Solution {
// public:
//     int rand10() {
// while(true) {
//             int a = rand7();
//             int b = rand7();
//             int num = (a-1)*7 + b; // rand 49

//             if(num <= 40) return num % 10 + 1; // 拒绝采样

//             a = num - 40; // rand 9
//             b = rand7();
//             num = (a-1)*7 + b; // rand 63

//             if(num <= 60) return num % 10 + 1;

//             a = num - 60; // rand 3
//             b = rand7();
//             num = (a-1)*7 + b; // rand 21
//             if(num <= 20) return num % 10 + 1;

//         }
//     }
// };