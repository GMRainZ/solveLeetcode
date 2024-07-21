// func fullBloomFlowers(flowers [][]int, people []int) []int {
//     n:=len(flowers)
//     starts:=make([]int,n)
//     ends:=make([]int,n)

//     for i,flower := range flowers{
//         starts[i]=flower[0]
//         ends[i]=flower[1]
//     }

//     sort.Ints(starts)
//     sort.Ints(ends)

//     ans:=make([]int,len(people))
//     for i,p:=range people{
//         //可能包含p的区间个数     -     第一个包含p的区间的下标（==未能包含p的区间个数）
//         ans[i]=sort.SearchInts(starts,p+1) - sort.SearchInts(ends,p)
//     }

//     return ans
// }