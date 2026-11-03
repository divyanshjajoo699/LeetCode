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

//     ListNode* reversell(ListNode*&head){
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         ListNode* next=NULL;

//     if(head==NULL||head->next==NULL){
//         return head;
//     }
//     while(curr!=NULL){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     return prev;
//  }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//        head=reversell(head);
//        ListNode*temp=head;
//        int i=1;
//        if(head==NULL){
//         return head;
//        }
//        if(head->next==NULL){
//         ListNode*delnode=head;
//         head=head->next;
//         delete delnode;
//         return head;
//        }
//        if(n==1){
//             ListNode*delnode=head;
//             head=head->next;
//             delete delnode;
//             head=reversell(head);
//             return head;
//        }
//         while(i<n-1){
//             temp=temp->next;
//             i++;
//         }
//         ListNode*delnode=temp->next;
//         temp->next=temp->next->next;
//         delete delnode;
//         head=reversell(head);
//         return head;
//     }

        // ListNode* removeNthFromEnd(ListNode* head, int n) {
        //     ListNode*temp=head;
        //     int count=0;
        //     if(head==NULL) return head;
        //     if(head->next==NULL&&n==1) return NULL;
        //     while(temp!=NULL){
        //         count++;
        //         temp=temp->next;
        //     }
        //     if(n==count){
        //         ListNode*delnode=head;
        //         head=head->next;
        //         delete delnode;
        //         return head;
        //     }
        //     int result=count-n;
        //     temp=head;
        //     while(temp!=NULL||temp->next!=NULL){
        //         result--;
        //         if(result==0) break;
        //         temp=temp->next;
        //     }
        //     ListNode*delnode=temp->next;
        //     temp->next=temp->next->next;
        //     delete delnode;

        //     return head;
        // }

         ListNode* removeNthFromEnd(ListNode* head, int n){
            ListNode*fast=head;
            if(head==NULL) return NULL;
            if(head->next==NULL&&n==1) return NULL;
            for(int i=0;i<n;i++) fast=fast->next;
            if(fast==NULL){
                ListNode*delnode=head;
                head=head->next;
                delete delnode;
                return head;
            }
            ListNode*slow=head;
            while(fast->next!=NULL){
                slow=slow->next;fast=fast->next;
            }
            ListNode*delnode=slow->next;
            slow->next=slow->next->next;
            delete delnode;
            return head;
         }
};