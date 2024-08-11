// func canBreak(start int, s string, wordMap map[string]bool, memo map[int]bool) bool {

// 	if start == len(s) {

// 		return true

// 	}

// 	if res, ok := memo[start]; ok {

// 		return res

// 	}

// 	for i := start + 1; i <= len(s); i++ {

// 		prefix := s[start:i]

// 		if wordMap[prefix] && canBreak(i, s, wordMap, memo) {

// 			memo[start] = true

// 			return true

// 		}

// 	}

// 	memo[start] = false

// 	return false

// }

// func wordBreak(s string, wordDict []string) bool {

// 	wordMap := map[string]bool{}

// 	for _, v := range wordDict {

// 		wordMap[v] = true

// 	}

// 	memo := make(map[int]bool)

// 	return canBreak(0, s, wordMap, memo)

// }

