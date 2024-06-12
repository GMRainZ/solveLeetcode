
// func countTriplets(arr []int) int {

// 	n := len(arr)

// 	prefix := 0

// 	hash := map[int][]int{0: {-1}}

// 	ans := 0

// 	for i := 0; i < n; i++ {

// 		prefix ^= arr[i]

// 		if indices, exists := hash[prefix]; exists {

// 			for _, idx := range indices {

// 				ans += i - idx - 1

// 			}

// 		}

// 		hash[prefix] = append(hash[prefix], i)

// 	}

// 	return ans

// }