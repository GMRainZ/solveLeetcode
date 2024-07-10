// func checkSubarraySum(nums []int, k int) bool {
//     n:=len(nums)
//     if n<2{
//         return false
//     }

//     f:=map[int]int{0:-1}

//     //var preIndex int
//     remainder:=0

//     for i:=0;i<n;i++{
//         remainder=(remainder+nums[i])%k

//         if preIndex,has:=f[remainder];has{
//             preIndex=f[remainder]
//             if i-preIndex>=2{
//                 return true
//             }
//         }else{
//             f[remainder]=i
//         }
//     }

//     return false
// }