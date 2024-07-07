// func waysToPartition(nums []int, k int) (ans int) {

// 	n := len(nums)

// 	sum := make([]int, n)

// 	sum[0] = nums[0]

// 	cntR := map[int]int{}

// 	for i := 1; i < n; i++ {

// 		sum[i] = sum[i-1] + nums[i]

// 		cntR[sum[i-1]]++

// 	}

// 	tot := sum[n-1]

// 	if tot%2 == 0 {

// 		ans = cntR[tot/2] // 不修改

// 	}

// 	cntL := map[int]int{}

// 	for i, s := range sum {

// 		if d := k - nums[i]; (tot+d)%2 == 0 {

// 			ans = max(ans, cntL[(tot+d)/2]+cntR[(tot-d)/2]) // 修改 nums[i]

// 		}

// 		cntL[s]++

// 		cntR[s]--

// 	}

// 	return

// }
