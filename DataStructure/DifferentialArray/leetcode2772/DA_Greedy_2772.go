// func checkArray(nums []int, k int) bool {
//     n:=len(nums)
//     diff:=make([]int,n+1)

//     sum_diff:=0

//     for i,x := range nums{
//         sum_diff+=diff[i]
//         x+=sum_diff

//         if x==0{
//             continue
//         }
//         if x<0 || i+k>n{
//             return false
//         }

//         sum_diff-=x

//         diff[i+k]+=x
//     }

//     return true
// }