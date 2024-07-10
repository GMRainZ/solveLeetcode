// func longestAwesome(s string) int {
//     const D=10
// 	n := len(s)

// 	ans := 1

// 	prefix := 0

// 	pos := make([]int, 1<<D)

// 	for i := range pos {

// 		pos[i] = n

// 	}

// 	pos[0] = -1

// 	for i := 0; i < n; i++ {

// 		digit, _ := strconv.Atoi(string(s[i]))

// 		prefix ^= 1 << (digit)

// 		for j := 0; j < D; j++ {

// 			ans = int(math.Max(float64(ans), float64(i-pos[prefix^(1<<j)])))

// 		}

// 		// 相等的情况

// 		ans = int(math.Max(float64(ans), float64(i-pos[prefix])))

// 		if pos[prefix] == n {

// 			pos[prefix] = i

// 		}

// 	}

// 	return ans

// }