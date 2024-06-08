
// func longestWPI(hours []int) int {

// 	n := len(hours)

// 	ans := 0

// 	s := make([]int, n+1) // 前缀和

// 	st := []int{}

// 	st = append(st, 0)

// 	for j := 1; j <= n; j++ {

// 		if hours[j-1]>8{
//             s[j]=s[j-1]+1
//         }else{
//             s[j]=s[j-1]-1
//         }

// 		if s[j] < s[st[len(st)-1]] {

// 			st = append(st, j) // 感兴趣的 j

// 		}

// 	}

// 	for i := n; i > 0; i-- {

// 		for len(st) > 0 && s[i] > s[st[len(st)-1]] {

// 			ans = int(max(ans, i-st[len(st)-1])) // [栈顶,i) 可能是最长子数组

// 			st = st[:len(st)-1]

// 		}

// 	}

// 	return ans

// }