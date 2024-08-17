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
//     vector<int> inorderTraversal(TreeNode* root) {
//         if(!root)return {};

//         stack<TreeNode*>stk;
//         vector<int>ans;

//         TreeNode*cur=root;
//         while(cur!=nullptr || !stk.empty()){
//             if(cur){
//                 stk.emplace(cur);
//                 cur=cur->left;
//             }else{
//                 cur=stk.top(),stk.pop();
//                 ans.emplace_back(cur->val);
//                 cur=cur->right;
//             }
//         }

//         return ans;
//     }
// };