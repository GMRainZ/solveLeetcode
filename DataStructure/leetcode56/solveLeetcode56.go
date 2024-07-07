
// func merge(intervals [][]int) [][]int {
// 	n := len(intervals)
// 	sort.Slice(intervals, func(i, j int) bool {
// 		return intervals[i][0] < intervals[j][0]
// 	})

// 	var ans [][]int
//     var length int

// 	for i := 0; i < n; i++ {
// 		length=len(ans)
//         if length == 0 || ans[length-1][1] < intervals[i][0] {
// 			ans = append(ans, intervals[i])
// 		} else {
// 			ans[length-1][1] = max(intervals[i][1], ans[length-1][1])
// 		}
// 	}

// 	return ans
// }