// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         if(!head)return nullptr;

//         Node*p=head,*q;

//         while(p){
//             q=new Node(p->val);
//             q->next=p->next;
//             p->next=q;
//             p=q->next;
//         }
//         p=head,q;
//         while(p){
//             q=p->next;
//             q->random=p->random?p->random->next:nullptr;
//             p=q->next;
//         }

//         Node dummy(0);
//         p=head,q=p->next,dummy.next=q;
//         while(p){
//             p->next=q->next;
//             p=p->next;
//             q->next=p?p->next:nullptr;
//             q=q->next;
//         }

//         return dummy.next;
//     }
// };