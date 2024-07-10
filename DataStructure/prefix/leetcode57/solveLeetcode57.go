// func insert(intervals [][]int, newInterval []int) [][]int {
// 	res := make([][]int, 0)
// 	l := len(intervals)
// 	i := 0
// 	for i < l && intervals[i][1] < newInterval[0] {
// 		res = append(res, intervals[i])
// 		i++
// 	}
// 	for i < l && intervals[i][0] <= newInterval[1] {
// 		newInterval[0] = min(newInterval[0], intervals[i][0])
// 		newInterval[1] = max(newInterval[1], intervals[i][1])
// 		i++
// 	}
// 	res = append(res, newInterval)
// 	for i < l {
// 		res = append(res, intervals[i])
// 		i++
// 	}
// 	return res
// }

// func merge(intervals [][]int) [][]int {

// 	n := len(intervals)

// 	sort.Slice(intervals, func(i, j int) bool {

// 		return intervals[i][0] < intervals[j][0]

// 	})

// 	ans := [][]int{}

// 	for i := 0; i < n; i++ {

// 		if len(ans) == 0 || ans[len(ans)-1][1] < intervals[i][0] {

// 			ans = append(ans, intervals[i])

// 		} else {

// 			ans[len(ans)-1][1] = max(intervals[i][1], ans[len(ans)-1][1])

// 		}

// 	}

// 	return ans

// }

// func insert(intervals [][]int, newInterval []int) [][]int {

// 	intervals = append(intervals, newInterval)

// 	return merge(intervals)

// }