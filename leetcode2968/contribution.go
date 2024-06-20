// func maxFrequencyScore(nums []int, k int64) int {
//     n:=len(nums)
//     sort.Ints(nums)

//     prefix:=make([]int64,n+1)

//     for i:=0;i<n;i++{
//         prefix[i+1]=prefix[i]+int64(nums[i])
//     }

//     ans:=0
//     var s int64=0
//     left:=0
//     for i:=0;i<n;i++{
//         s+=int64(nums[i]-nums[(left+i)>>1])
//         for s>k{
//             s+=int64(nums[left] - nums[(left+i+1)>>1])
//             left++
//         }
//         ans=max(ans,i-left+1)
//     }

//     return ans
// }