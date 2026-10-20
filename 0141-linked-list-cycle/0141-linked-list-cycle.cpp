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
    bool hasCycle(ListNode *head) {
    //    ListNode*temp=head;
    //    while(temp->next!=NULL){
    //     if(temp->next==NULL){
    //         return false;
    //     }
    //         temp=temp->next;
    //    } 
    //    return true;
    ListNode*fast=head;
    ListNode*slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
        slow=slow->next;
    }
    return false;
    }

};