// // This function takes two parameters, a slice of integers and a 2D slice of integers, and returns a slice of integers.
// func xorQueries(nums []int, queries [][]int) []int {

// 	// Get the length of the nums slice
// 	n := len(nums)

// 	// Create a slice of integers with a length of n+1
// 	prefix := make([]int, n+1)

// 	// Iterate through the nums slice
// 	for i := 0; i < n; i++ {

// 		// Set the i+1th element of the prefix slice to the XOR of the current element and the previous element
// 		prefix[i+1] = prefix[i] ^ nums[i]

// 	}

// 	// Get the length of the queries slice
// 	n_q := len(queries)

// 	// Create a slice of integers with a length of n_q
// 	ans := make([]int, n_q)

// 	// Iterate through the queries slice
// 	for i := 0; i < n_q; i++ {

// 		// Set the i+1th element of the ans slice to the XOR of the queries[i][1]th element and the queries[i][0]th element
// 		ans[i] = prefix[queries[i][1]+1] ^ prefix[queries[i][0]]

// 	}

// 	// Return the ans slice
// 	return ans

// }