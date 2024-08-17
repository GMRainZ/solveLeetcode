// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(!head)return head;
//         ListNode*p=head;


//         //计算长度
//         int n=0;
//         while(p){
//             ++n;
//             p=p->next;
//         }

//         k=k%n;

//         if(!k)return head;
//         k=n-k;
//         ListNode dummy;
//         dummy.next=head;

//         p=&dummy;
//         while(k--){
//             p=p->next;
//         }   

        
//         dummy.next=p->next;
//         p->next=nullptr;
//         p=&dummy;

//         while(p->next){
//             p=p->next;
//         }
//         p->next=head;

//         return dummy.next;
//     }
// };