// func countSubarrays(nums []int, k int) int {

// 	pos := find(nums, k)

// 	n := len(nums)

// 	hash := map[int]int{0: 1}

// 	i, x := pos-1, 0

// 	for i >= 0 {

// 		if nums[i] < k {
// 			x++
// 		} else {
// 			x--
// 		}

// 		hash[x]++
// 		i--
// 	}

// 	ans := hash[0] + hash[-1]
//     x=0
// 	for i = pos + 1; i < n; i++ {
// 		if nums[i] > k {
// 			x++
// 		} else {
// 			x--
// 		}
// 		ans += hash[x] + hash[x-1]
// 	}
// 	return ans
// }

// // find 函数模拟 C++ 中的 std::find 行为

// func find(nums []int, target int) int {
// 	for i, v := range nums {

// 		if v == target {
// 			return i
// 		}
// 	}
// 	return -1 // 如果没有找到，这里返回-1，实际应用中可能需要根据情况调整
// }