// func countPalindromePaths(parent []int, s string) int64 {

// 	n := len(parent)

// 	graph := make([][]int, n)

// 	for i := 1; i < n; i++ {

// 		graph[parent[i]] = append(graph[parent[i]], i)

// 	}

// 	ans := int64(0)

// 	cnt := map[int]int{0: 1}

// 	var dfs func(int, int)

// 	dfs = func(v int, xor_ int) {

// 		for _, w := range graph[v] {

// 			x := xor_ ^ (1 << (s[w] - 'a'))

// 			ans += int64(cnt[x])

// 			for i := 0; i < 26; i++ {

// 				ans += int64(cnt[x^(1<<i)])

// 			}

// 			cnt[x]++

// 			dfs(w, x)

// 		}

// 	}

// 	dfs(0, 0)

// 	return ans

// }