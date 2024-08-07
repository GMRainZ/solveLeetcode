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
//     unordered_map<int,unsigned long long>left_node;
//     unsigned long long ans=0;
//     void dfs(TreeNode*root,long long no,int depth){
//         if(!root){
//             return;
//         }

//         if(!left_node.count(depth)){
//             left_node[depth]=no;
//         }
//         ans=max(ans,no-left_node[depth]+1);

//         dfs(root->left,no<<1,depth+1);
//         dfs(root->right,no<<1|1,depth+1);
//     }
// public:
//     int widthOfBinaryTree(TreeNode* root) {
//         dfs(root,1,0);

//         return ans;
//     }
// };