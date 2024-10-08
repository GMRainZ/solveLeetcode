// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* left;
//     Node* right;

//     Node() {}

//     Node(int _val) {
//         val = _val;
//         left = NULL;
//         right = NULL;
//     }

//     Node(int _val, Node* _left, Node* _right) {
//         val = _val;
//         left = _left;
//         right = _right;
//     }
// };
// */
// class Solution {
//     Node*pre=nullptr,*head=nullptr;
//     void dfs(Node*cur){
//         if(!cur)return;
//         dfs(cur->left);

//         if(!pre)head=cur;
//         else pre->right=cur;

//         cur->left=pre;
//         pre=cur;

//         dfs(cur->right);
//     }
// public:
//     Node* treeToDoublyList(Node* root) {
//         if(!root)return nullptr;
//         dfs(root);

//         head->left=pre;
//         pre->right=head;

//         return head;
//     }
// };