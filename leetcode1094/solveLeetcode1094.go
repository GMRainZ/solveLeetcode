// func carPooling(trips [][]int, capacity int) bool {
//     diff := make([]int, 1007)
//     for _, trip := range trips {
//         diff[trip[1]+1] += trip[0]
//         diff[trip[2]+1] -= trip[0]
//     }

//     for i := 0; i < 1006; i++ {
//         diff[i+1] += diff[i]
//         if diff[i+1] > capacity {
//             return false
//         }
//     }

//     return true
// }