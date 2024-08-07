// class Solution {

// public:

//     bool isValidBST(TreeNode* root, long left = LONG_MIN, long right = LONG_MAX) {

//         if (root == nullptr) {

//             return true;

//         }

//         long x = root->val;

//         return left < x && x < right &&

//                isValidBST(root->left, left, x) &&

//                isValidBST(root->right, x, right);

//     }

// };

