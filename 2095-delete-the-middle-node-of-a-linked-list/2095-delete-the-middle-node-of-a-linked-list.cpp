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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*temp=head;int cnt=0;
         if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            // ListNode*delnode=head;
            // head=NULL;
            // delete delnode;
            // return head;
            return NULL;
        }
        // if(head->next->next==NULL){
        //     ListNode*delnode=head->next;
        //     delete delnode;
        //     return head;
        // }
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int midnode=(cnt/2);
        int i=0;
        while(i<midnode-1){
            temp=temp->next;
            i++;
        }
        ListNode*delnode=temp->next;
        temp->next=delnode->next;
        delete delnode;
        return head;
    }
};