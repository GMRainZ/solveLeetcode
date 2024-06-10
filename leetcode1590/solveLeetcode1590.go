// func minSubarray(nums []int, p int) int {

// 	if p == 1 {

// 		return 0

// 	}

// 	n := len(nums)

// 	sum := 0

// 	for _, num := range nums {

// 		sum = (sum + num) % p

// 	}

// 	prefix := 0

// 	m := make(map[int]int)

// 	m[0] = -1

// 	ans, t := n, 0

// 	for i := 0; i < n; i++ {

// 		prefix = (prefix + nums[i]) % p
// 		m[prefix] = i
// 		t = (prefix - sum + p) % p

// 		if val, ok := m[t]; ok {

// 			ans = min(ans, i-val)

// 		}

// 	}

// 	if ans < n {

// 		return ans

// 	}

// 	return -1

// }