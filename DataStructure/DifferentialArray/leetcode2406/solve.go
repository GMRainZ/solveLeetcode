// type Pair struct {

// 	start, end int

// }

// func minGroups(intervals [][]int) int {

// 	diff := make(map[int]int)

// 	for _, interval := range intervals {

// 		diff[interval[0]]++

// 		diff[interval[1]+1]--

// 	}

// 	// 将 map 的键排序以进行遍历

// 	var keys []int

// 	for k := range diff {

// 		keys = append(keys, k)

// 	}

// 	sort.Ints(keys)

// 	ans, sum := 0, 0

// 	for _, k := range keys {

// 		sum += diff[k]

// 		if sum > ans {

// 			ans = sum

// 		}

// 	}

// 	return ans

// }