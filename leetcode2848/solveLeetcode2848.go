// func numberOfPoints(nums [][]int) int {
//     f := make([]int, 105)
//     for _, num := range nums {
//         f[num[0]]++
//         f[num[1]+1]--
//     }

//     ans := 0
//     for i := 0; i <= 100; i++ {
//         f[i+1] += f[i]
//         if f[i+1] > 0 {
//             ans++
//         }
//     }

//     return ans
// }