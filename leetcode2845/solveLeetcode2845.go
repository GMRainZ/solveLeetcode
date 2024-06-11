// // func countInterestingSubarrays(nums []int, modulo int, k int) int64 {

// // }

// // func countInterestingSubarrays(nums []int, mod int, k int) int64 {
// //     cnt := make(map[int]int)
// //     cnt[0] = 1 // 把 s[0]=0 算进去

// //     ans := int64(0)
// //     s := 0

// //     for _, x := range nums {
// //         if x%mod == k {
// //             s = (s + 1) % mod
// //         }
// //         ans += int64(cnt[(s-k+mod)%mod]) // +mod 避免减法出现负数
// //         cnt[s%mod]++
// //     }

// //     return ans
// // }

// // 数组版本，效率更高！

// // 因为 s 至多为 n

// func countInterestingSubarrays(nums []int, mod int, k int) int64 {
//     n := len(nums)
//     cnt := make([]int, n+1)
//     cnt[0] = 1

//     ans := int64(0)
//     s := 0

//     for _, x := range nums {
//         if x%mod == k {
//             s = (s + 1) % mod
//         }
//         s2 := (s - k + mod) % mod
//         if s2 <= n {
//             ans += int64(cnt[s2])
//         }
//         cnt[s]++
//     }

//     return ans
// }
