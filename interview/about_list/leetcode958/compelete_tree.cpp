// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
//     int n_node=0,max_tag=0;

//     bool dfs(TreeNode*root,int tag){
//         if(!root){
//             return true;
//         }
//         if(tag>100){
//             return false;
//         }
//         ++n_node,max_tag=max(max_tag,tag);
        
//         return dfs(root->left,tag<<1)&&dfs(root->right,1+(tag<<1));
//     }
// public:
//     bool isCompleteTree(TreeNode* root) {
//         if(!dfs(root,1)){
//             return false;
//         }
//         return n_node==max_tag;
//     }
// };