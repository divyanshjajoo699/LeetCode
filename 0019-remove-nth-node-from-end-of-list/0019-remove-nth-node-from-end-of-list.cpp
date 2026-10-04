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

    ListNode* reversell(ListNode*&head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;

    if(head==NULL||head->next==NULL){
        return head;
    }
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
 }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       head=reversell(head);
       ListNode*temp=head;
       int i=1;
       if(head==NULL){
        return head;
       }
       if(head->next==NULL){
        ListNode*delnode=head;
        head=head->next;
        delete delnode;
        return head;
       }
       if(n==1){
            ListNode*delnode=head;
            head=head->next;
            delete delnode;
            head=reversell(head);
            return head;
       }
        while(i<n-1){
            temp=temp->next;
            i++;
        }
        ListNode*delnode=temp->next;
        temp->next=temp->next->next;
        delete delnode;
        head=reversell(head);
        return head;
    }
};