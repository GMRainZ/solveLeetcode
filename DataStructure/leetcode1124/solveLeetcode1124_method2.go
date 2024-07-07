// func longestWPI(hours []int) int {

// 	n := len(hours)

// 	ans, s := 0, 0

// 	pos := make([]int, n+2) // 记录前缀和首次出现的位置

// 	for i := 1; i <= n; i++ {

// 		if hours[i-1] > 8 {

// 			s--

// 		} else {

// 			s++

// 		} // 所有和前缀和相关的都取反

// 		if s < 0 {

// 			ans = i

// 		} else {

// 			if pos[s+1] != 0 {

// 				ans = int(max(ans,i-pos[s+1]))

// 			}

// 			if pos[s] == 0 {

// 				pos[s] = i

// 			}

// 		}

// 	}

// 	return ans

// }