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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){ return NULL;}
         if(head->next==NULL){ return head;}
        ListNode* main=head;
        ListNode* left=head;
        ListNode* right=head->next;
        while(left!=NULL && right!=NULL){
            if(left->val==right->val){
                  right=right->next;
            }
            else{
                  left->next=right;
                  left=left->next;
            }
        }
        left->next=NULL;
        return main;
    }
};