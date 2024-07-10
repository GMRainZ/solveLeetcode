// func distance(nums []int) []int64 {

// 	n := len(nums)

// 	groups := make(map[int][]int)

// 	for i := 0; i < n; i++ {

// 		groups[nums[i]] = append(groups[nums[i]], i) // 相同元素分到同一组，记录下标

// 	}

// 	ans := make([]int64, n)

// 	for _, a := range groups {

// 		m := len(a)

// 		s := int64(0)

// 		for _, x := range a {

// 			s += int64(x - a[0]) // a[0] 到其它下标的距离之和

// 		}

// 		ans[a[0]] = s

// 		for i := 1; i < m; i++ {

// 			// 从计算 a[i-1] 到计算 a[i]，考虑 s 增加了多少

// 			s += int64((i*2 - m)) * int64(a[i]-a[i-1])

// 			ans[a[i]] = s

// 		}

// 	}

// 	return ans

// }