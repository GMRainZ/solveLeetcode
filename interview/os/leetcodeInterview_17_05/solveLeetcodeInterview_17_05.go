// func findLongestSubarray(array []string) []string {
//     n := len(array)
//     begin, end, s := 0, 0, n
//     first := make([]int, n*2+1)

//     for i := range first {
//         first[i] = -1
//     }

//     first[s] = 0

//     for i := 1; i <= n; i++ {
//         s += (int(array[i-1][0]) >> 6 & 1) * 2 - 1
//         j := first[s]

//         if j < 0 {
//             first[s] = i
//         } else if i-j > end-begin {
//             begin, end = j, i
//         }
//     }

//     return array[begin:end]
// }