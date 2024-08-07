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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2,int carry=0) {
//         if(!l1 && !l2){
//             return carry?new ListNode(carry):nullptr;
//         }
//         if(!l1){
//             std::swap(l1,l2);
//         }

//         int sum=carry+l1->val+(l2?l2->val:0);
//         l1->val=sum%10;
//         l1->next=addTwoNumbers(l1->next,(l2?l2->next:nullptr),sum/10);

//         return l1;
//     }
// };