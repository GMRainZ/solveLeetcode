// func fullBloomFlowers(flowers [][]int, people []int) []int {
//     diff:=map[int]int{}

//     for _,flower:=range flowers{
//         diff[flower[0]]++
//         diff[flower[1]+1]--
//     }

//     	n := len(diff)

// 	times := make([]int, 0, n)

// 	for t := range diff {

// 		times = append(times, t)

// 	}

// 	sort.Ints(times)

//     id:=make([]int,len(people))
//     for i:=range id{
//         id[i]=i
//     }
//     sort.Slice(id,func(i,j int)bool{return people[id[i]]<people[id[j]]})

//     j,sum:=0,0
//     for _,i := range id{
//         for ;j<n && times[j]<=people[i];j++{
//             sum+=diff[times[j]]
//         }
//         people[i] = sum
//     }
//     return people
// }