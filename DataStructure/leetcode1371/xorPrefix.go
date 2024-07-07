
// func findTheLongestSubstring(s string) int {
//     const vowelsBase = 1065233

// 	prefix := 0

// 	ans := 0

// 	hash := map[int]int{0: -1}

// 	for i, char := range s {

// 		char = unicode.ToLower(char)

// 		if strings.ContainsRune("aeiou", char) {

// 			prefix ^= 1 << (char - 'a')

// 		}

// 		t := prefix & vowelsBase

// 		if pos, ok := hash[t]; ok {

// 			ans = max(ans, i-pos)

// 		} else {

// 			hash[t] = i

// 		}

// 	}

// 	return ans

// }
