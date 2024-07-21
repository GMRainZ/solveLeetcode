

// func splitPainting(segments [][]int) (ans [][]int64) {
// 	diff := make(map[int64]int64)

// 	// 计算差分
// 	for _, segment := range segments {
// 		diff[int64(segment[0])] += int64(segment[2])
// 		diff[int64(segment[1])] -= int64(segment[2])
// 	}

// 	// 创建一个切片用于存储map的键
// 	var positions []int64
// 	for pos := range diff {
// 		positions = append(positions, pos)
// 	}

// 	// 对切片中的键进行排序
// 	sort.Slice(positions, func(i, j int) bool {
// 		return positions[i] < positions[j]
// 	})

// 	// 初始化变量
// 	var last int64 = positions[0]
// 	color := int64(0)

// 	// 遍历排序后的键
// 	for _, pos := range positions {
// 		d := diff[pos]

// 		// 更新颜色和答案
// 		if color != 0 {
// 			ans = append(ans, []int64{last, pos, color})
// 		}

// 		last = pos
// 		color += d
// 	}

// 	return ans
// }