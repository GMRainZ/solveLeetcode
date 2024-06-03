// func beautifulSubarrays(nums []int) int64 {
//     n:=len(nums)
//     f:=make(map[int]int)
//     f[0]=1

//     ans:=int64(0)
//     prefix:=0
//     for i:=0;i<n;i++{
//         prefix^=nums[i]

//         if val,ok:=f[prefix];ok{
//             ans+=int64(val)
//         }
//         f[prefix]++
//     }

//     return ans
// }