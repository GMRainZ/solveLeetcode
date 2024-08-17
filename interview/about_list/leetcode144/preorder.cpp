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
//     vector<int> preorderTraversal(TreeNode* root) {
//         if(!root)return {};

//         stack<TreeNode*>stk;    
//         stk.emplace(root);

//         vector<int>ans;
//         TreeNode*node;
//         while(!stk.empty()){
//             node=stk.top(); 
//             ans.emplace_back(node->val);
//             stk.pop();

//             if(node->right)stk.emplace(node->right);
//             if(node->left)stk.emplace(node->left);
//         }

//         return ans;
//     }
// };