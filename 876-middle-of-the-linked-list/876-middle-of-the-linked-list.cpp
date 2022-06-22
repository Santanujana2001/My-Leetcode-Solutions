/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp=head;
//         int c=0;
//         while(temp!=NULL){
//             c++;
//             temp=temp->next;
//         }
//         temp=head;
//         c=c/2;
//         while(c--){
//            temp=temp->next;
//         }
//         return temp;
//     }
// };