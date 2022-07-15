/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *f=head;
        ListNode *s=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(f==s){
                break;
            }
        }
        if(f==NULL || f->next==NULL){
            return NULL;
        }
        while(head!=s){
            head=head->next;
            s=s->next;
        }
        return head;
    }
};