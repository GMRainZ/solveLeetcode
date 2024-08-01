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
// private:
//     ListNode*reserveList(ListNode*head)
//     {
//         if(!head||!head->next)return head;

//         ListNode*pre=nullptr,*cur=head,*curnext=cur->next;

//         while(cur)
//         {
            
//             cur->next=pre;
//             pre=cur;
//             cur=curnext;
//             if(!cur)break;
//             curnext=cur->next;
//         }
//         return pre;
//     }
// public:

//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//     {
//         ListNode*p=l1,*q=l2,*pre;
//         int x,y=0;
//         while(p&&q)
//         {
//             x=p->val+q->val+y;
//             y=x/10;
//             p->val=x%10;
//             pre=p;
//             p=p->next;
//             q=q->next;
//         }

//         if(q)pre->next=q;
//         p=pre->next;
//         while(p)
//         {
//             x=p->val+y;
//             y=x/10;
//             p->val=x%10;
//             pre=p;
//             p=p->next;
//         }
        
//         if(y>0)
//         {
//             ListNode*node=new ListNode(y);
//             pre->next=node;
//         }

//         //l1=reserveList(l1);

//         return l1;
//     }
// };


