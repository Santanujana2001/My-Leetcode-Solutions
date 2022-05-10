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
    int getDecimalValue(ListNode* head) {
        ListNode* t=head;
        int c=-1,sum=0;
        while(t){
            c++;
            t=t->next;
        }
        while(c>=0){
            sum+=head->val*pow(2,c);
            head=head->next;
            c--;
        }
        return sum;
    }
};