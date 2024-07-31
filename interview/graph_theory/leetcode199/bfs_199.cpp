// // // Define the structure for the tree node
// // struct TreeNode {
// //     int val;
// //     TreeNode *left;
// //     TreeNode *right;
// //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// // };

// class Solution {
// public:
//     std::vector<int> rightSideView(TreeNode* root) {
//         std::vector<int> res;
//         if (root == nullptr) {
//             return res;
//         }
//         std::queue<TreeNode*> queue;
//         queue.push(root);
//         while (!queue.empty()) {
//             int size = queue.size();
//             for (int i = 0; i < size; i++) {
//                 TreeNode* node = queue.front();
//                 queue.pop();
//                 if (node->left != nullptr) {
//                     queue.push(node->left);
//                 }
//                 if (node->right != nullptr) {
//                     queue.push(node->right);
//                 }
//                 if (i == size - 1) {  // Add the last node of the current level to the result vector
//                     res.push_back(node->val);
//                 }
//             }
//         }
//         return res;
//     }
// };