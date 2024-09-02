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
// public:
//     void flatten(TreeNode* root) {
//         if(!root)return;

//         stack<TreeNode*>stk;

//         stk.emplace(root);
        
//         TreeNode*cur,*pre=nullptr;
//         while(!stk.empty()){
//             cur=stk.top(),stk.pop();

//             if(pre){
//                 pre->right=cur;
//                 pre->left=nullptr;
//             }

//             if(cur->right)stk.emplace(cur->right);
//             if(cur->left)stk.emplace(cur->left);

//             pre=cur;
//         }
//     }   
// };