// func maxFrequencyScore(nums []int, k int64) int {
//     sort.Ints(nums)

//     n:=len(nums)
//     prefix:=make([]int64,n+1)

//     for i:=0;i<n;i++{
//         prefix[i+1]=prefix[i]+int64(nums[i])
//     }

//     dist_sum:=func(l,i,r int)int64{
//         left:=int64(nums[i]*(i-l)) - (prefix[i]-prefix[l])
//         right:=prefix[r+1]-prefix[i+1] - int64(nums[i]*(r-i))

//         return left+right
//     }

//     left:=0
//     ans:=0
//     for i:=0;i<n;i++{
//         for dist_sum(left,(left+i)>>1,i)>k{
//             left++
//         }
//         ans=max(ans,i-left+1)
//     }

//     return ans
// }


