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
    ListNode* reverseList(ListNode* head) {
        stack<int>v;            // Created Stack To Store The Values
        ListNode* t=head;       // Created A New Node To Hold The Previous Head Of Linked List
        while(head!=NULL){
            v.push(head->val);  // Storing The Values Of The List
            head=head->next;    // Putting Forward The Head
        }
        head=t;                 // Head Gets Back In It's Previous Position
         while(head!=NULL){
             head->val=v.top(); // Inserting The Values From Stack To List In Reverse Order
             v.pop();           // Popping The Last Element
             head=head->next;   // Putting Forward The Head
         }
        return t;               // Returned The Actual Head now
    }
};