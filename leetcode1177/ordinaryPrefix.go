// func canMakePaliQueries(s string, queries [][]int) []bool {

// 	n := len(s)

// 	nq := len(queries)

// 	ans := make([]bool, nq)

// 	prefix := make([][26]int, n+1)

// 	for i := 0; i < n; i++ {

// 		for j := 0; j < 26; j++ {

// 			prefix[i+1][j] = prefix[i][j]

// 		}

// 		prefix[i+1][s[i]-'a']++

// 	}

// 	for i := 0; i < nq; i++ {

// 		nOdd := 0

// 		for j := 0; j < 26; j++ {

// 			nOdd += (prefix[queries[i][1]+1][j] - prefix[queries[i][0]][j]) & 1

// 		}

// 		ans[i] = nOdd>>1 <= queries[i][2]

// 	}

// 	return ans

// }