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

    ListNode* addll(ListNode*& head,ListNode*&temp,int x){
        ListNode*newnode=new ListNode(x);
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
        temp->next=newnode;
        temp=newnode;
        
        }
        return head;
     }
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* temp=head;int count=1;int ele;ListNode*oddhead=NULL;ListNode*oddtemp=NULL;
            while(temp!=NULL){
                if(count%2!=0){
                    ele=temp->val;
                    oddhead=addll(oddhead,oddtemp,ele);
                }
                temp=temp->next;
                 count++;
            }
            temp=head;count=1;
            while(temp!=NULL){
                if(count%2==0){
                    ele=temp->val;
                    oddhead=addll(oddhead,oddtemp,ele);
                }
                temp=temp->next;
                count++;
            }
            return oddhead;

    }
};