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
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(!head||!head->next)return head;
//         ListNode*dummy=new ListNode(0,head),*cur=dummy;
//         int num;
//         while(cur->next&&cur->next->next)
//         {
//             num=cur->next->next->val;
//             if(cur->next->val==num)
//             {
//                 while(cur->next&&cur->next->val==num)cur->next=cur->next->next;
//             }
//             else cur=cur->next;
//         }
//         return dummy->next;
//     }
// };