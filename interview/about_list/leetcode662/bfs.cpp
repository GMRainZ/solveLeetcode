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
//     int widthOfBinaryTree(TreeNode* root) 
//     {
//         unsigned long long maxWidth=0,wid;
//         queue<TreeNode*>q;
//         queue<unsigned long long>qIndex;
//         q.emplace(root);qIndex.emplace(1);
//         TreeNode*node;unsigned long long ind,curSize;
//         unsigned long long begin,end;
//         while(q.size())
//         {
//             curSize=q.size();
//             for(int i=0;i<curSize;++i)
//             {
//                 node=q.front(),q.pop();
//                 ind=qIndex.front(),qIndex.pop();
//                 if(node->left)q.emplace(node->left),qIndex.emplace(2*ind);
//                 if(node->right)q.emplace(node->right),qIndex.emplace(2*ind+1);

//                 if(!i)begin=ind;
//                 if(i==curSize-1)end=ind;
//             }    

//             maxWidth=max(end-begin+1,maxWidth);
//         }
//         return maxWidth;
//     }
// };