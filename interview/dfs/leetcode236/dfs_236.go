// /**
//  * Definition for a binary tree node.
//  * type TreeNode struct {
//  *     Val int
//  *     Left *TreeNode
//  *     Right *TreeNode
//  * }
//  */
//  func lowestCommonAncestor(root, p, q *TreeNode) *TreeNode {
//     if root==nil||root==p||root==q{
//         return root
//     }

//     lf:=lowestCommonAncestor(root.Left,p,q)
//     rf:=lowestCommonAncestor(root.Right,p,q)

//     if lf==nil{
//         return rf
//     }
//     if rf==nil{
//         return lf
//     }
//     return root

// }