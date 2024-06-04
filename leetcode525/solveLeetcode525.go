// func findMaxLength(nums []int) int {
//     n := len(nums)
//     hash := make(map[int]int)
//     hash[0] = -1

//     prefix := 0
//     ans := 0
//     for i := 0; i < n; i++ {
//         prefix += (nums[i] * 2) - 1

//         if val, ok := hash[prefix]; ok {
//             if ans < i-val {
//                 ans = i - val
//             }
//         } else {
//             hash[prefix] = i
//         }
//     }

//     return ans
// }