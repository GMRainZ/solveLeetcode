// // This function takes a slice of integers as an argument and returns a slice of integers
// func getSumAbsoluteDifferences(nums []int) []int {

// 	// Get the length of the input slice
// 	n := len(nums)

// 	// Initialize variables i and prefix
// 	i, prefix := 0, 0

// 	// Initialize a slice of integers called suffix with a length of n+1
// 	suffix := make([]int, n+1)

// 	// Initialize a slice of integers called res with a length of n
// 	res := make([]int, n)

// 	// Iterate through the input slice in reverse
// 	for i = n - 1; i >= 0; i-- {

// 		// Add the current element to the suffix slice
// 		suffix[i] = suffix[i+1] + nums[i]

// 	}

// 	// Iterate through the input slice
// 	for i = 0; i < n; i++ {

// 		// Calculate the absolute difference between the current element and the corresponding element in the suffix slice
// 		res[i] = suffix[i+1] - (n-i-1)*nums[i] + nums[i]*i - prefix

// 		// Add the current element to the prefix variable
// 		prefix += nums[i]

// 	}

// 	// Return the result slice
// 	return res

// }