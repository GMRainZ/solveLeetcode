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
//     //归并排序
//     ListNode*sortList(ListNode*head,ListNode*tail){
//         if(!head){
//             return head;
//         }
//         if(head->next==tail){
//             head->next=nullptr;
//             return head;
//         }
        
//         ListNode*slow=head,*fast=head;
//         while(fast!=tail){
//             slow=slow->next;
//             fast=fast->next;

//             if(fast!=tail){
//                 fast=fast->next;
//             }
//         }



//         return merge(sortList(head,slow),sortList(slow,fast));
//     }
//     //合并有序链表leetcode21
//     ListNode*merge(ListNode*head1,ListNode*head2){
//         ListNode*dummyHead=new ListNode(0);
//         ListNode*temp=dummyHead,*temp1=head1,*temp2=head2;

//         while(temp1 && temp2){
//             if(temp1->val>temp2->val){
//                 temp->next=temp2;
//                 temp2=temp2->next;
//             }else{
//                 temp->next=temp1;
//                 temp1=temp1->next;
//             }
//             temp=temp->next;
//         }

//         if(temp1){
//             temp->next=temp1;
//         }
//         if(temp2){
//             temp->next=temp2;
//             // temp=temp->next;
//             // temp2=temp2->next;
//         }

//         return dummyHead->next;
//     }
//     public:
//     ListNode* sortList(ListNode* head) {
//         return sortList(head,nullptr);
//     }
// };