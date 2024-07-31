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
//     ListNode*reverseList(ListNode*head)
//     {
//         ListNode*pre=nullptr,*cur=head,*curnext;
//         while(cur)
//         {
//             curnext=cur->next;
//             cur->next=pre;
//             pre=cur;
//             cur=curnext;
//         }
//         return pre;
//     }
// public:
//     void reorderList(ListNode* head) {
//         if(!head||!head->next)return;

//         ListNode*fast=head,*slow=head;
//         while(fast->next&&fast->next->next)
//         {
//             fast=fast->next->next;
//             slow=slow->next;
//         }

//         fast=slow->next;
//         slow->next=nullptr;
//         fast=reverseList(fast);
//         slow=head;
//         ListNode*p,*q;
//         while(slow&&fast)
//         {
//             p=slow->next,q=fast->next;
//             slow->next=fast;
//             fast->next=p;
//             slow=p,fast=q;
//         }
//     }
// };