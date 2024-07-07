
// func canMakePaliQueries(s string, queries [][]int) []bool {

// 	n := len(s)

// 	nq := len(queries)

// 	ans := make([]bool, nq)

// 	prefix := make([]int, n+1)

// 	for i := 0; i < n; i++ {

// 		prefix[i+1] = prefix[i] ^ (1 << (s[i] - 'a'))

// 	}

// 	canMakePalindrome := func(start, end, k int) bool {

// 		nOdd := bits.OnesCount(uint(prefix[end+1] ^ prefix[start]))

// 		return nOdd>>1 <= k

// 	}

// 	for i := 0; i < nq; i++ {

// 		ans[i] = canMakePalindrome(queries[i][0], queries[i][1], queries[i][2])

// 	}

// 	return ans

// }