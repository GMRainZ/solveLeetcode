// func isVowel(c rune) int {
// 	if c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' {
// 		return 1
// 	}
// 	return 0
// }

// func beautifulSubstrings(s string, k int) int64 {

// 	n := len(s)

// 	ans, t := int64(0), 0

// 	prefix := make([]int64, n+1)

// 	for i := 0; i < n; i++ {

// 		prefix[i+1] = prefix[i] + int64(isVowel(rune(s[i])))

// 		t = int(prefix[i+1])

// 		for t > 0 {

// 			if t*2 > i+1 {

// 				t--

// 				continue

// 			}

// 			if prefix[i+1]-prefix[i+1-2*t] == int64(t) && int64(t*t)%int64(k) == 0 {

// 				ans++

// 			}

// 			t--

// 		}

// 	}

// 	return ans

// }