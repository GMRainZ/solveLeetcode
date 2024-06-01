// func subarraysDivByK(nums []int, k int) int {
//     hash:=make(map[int]int)
//     hash[0]=1

//     sum:=0
//     var module int
//     ans:=0
//     for _,num:=range nums{
//         sum+=num

//         module=(sum%k+k)%k

//         _,exsit:=hash[module]
//         if exsit{
//             ans+=hash[module]
//         }
//         hash[module]++
//     }

//     return ans;
// }