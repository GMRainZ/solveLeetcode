// func maxNonOverlapping(nums []int, target int) int {
// 	prefix := 0
// 	hash := make(map[int]int)
// 	hash[0] = 1

// 	ans := 0
// 	t := 0
// 	for _, x := range nums {
// 		prefix += x

// 		t = prefix - target
// 		if _, ok := hash[t]; ok {
// 			hash = make(map[int]int)
// 			hash[0] = 1
// 			ans++
// 			prefix = 0
// 		} else {
// 			hash[prefix]++
// 		}
// 	}

// 	return ans
// }
