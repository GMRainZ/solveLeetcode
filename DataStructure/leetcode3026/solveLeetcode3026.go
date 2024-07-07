// func maximumSubarraySum(nums []int, k int) int64 {
// 	minPrefixSum := make(map[int]int64)
// 	prefix := int64(0)
// 	var ans int64= math.MinInt64

// 	for _, x := range nums {
// 		if val, ok := minPrefixSum[x]; ok {
// 			minPrefixSum[x] = min(val, prefix)
// 		} else {
// 			minPrefixSum[x] = prefix
// 		}

// 		prefix += int64(x)

// 		if val, ok := minPrefixSum[x-k]; ok {
// 			ans = max(ans, prefix-val)
// 		}
// 		if val, ok := minPrefixSum[x+k]; ok {
// 			ans = max(ans, prefix-val)
// 		}
// 	}

// 	if ans == math.MinInt64 {
// 		return 0
// 	}
// 	return ans
// }