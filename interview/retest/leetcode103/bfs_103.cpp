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
//     vector<int>a;
//     vector<vector<int>>ans;
//     void bfs(TreeNode*&root)
//     {
//         queue<TreeNode*>q;
//         q.emplace(root);
//         int curSize,cnt=0;
//         TreeNode*node;
//         while(q.size())
//         {
//             ++cnt;
//             curSize=q.size();
//             a.clear();
//             while(curSize--)
//             {
//                 node=q.front(),q.pop();
//                 a.emplace_back(node->val);
//                 if(node->left)q.emplace(node->left);
//                 if(node->right)q.emplace(node->right);
//             }
//             if(!(cnt%2))reverse(a.begin(),a.end());
//             ans.emplace_back(a);
//         }
//     }
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         if(!root)return {};
//         bfs(root);
//         return ans;
//     }
// };