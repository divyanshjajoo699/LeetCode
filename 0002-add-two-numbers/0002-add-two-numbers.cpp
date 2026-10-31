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
    //     int carry=0; int digit=0;
    // ListNode* reversell(ListNode* head){
    //     ListNode* prev=NULL;
    //     ListNode* curr=head;
    //     ListNode* next=NULL;
    //     if(head==NULL||head->next==NULL){
    //         return head;
    //     }
    // while(curr!=NULL){
    //     next=curr->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=next;
    // }
    // return prev;
    // }
    // ListNode* newll(int x,ListNode**head1,ListNode**temp3){
    //     if(*head1==NULL){
    //          ListNode *newnode=new ListNode(x);
    //          *head1=newnode;
    //         *temp3=*head1;
    //         return *head1;
    //     }
    //    else{
    //      ListNode *newnode=new ListNode(x);
    //      (*temp3)->next=newnode;
    //     *temp3=(*temp3)->next;
    //     return *head1;
    //    }               
    // }
    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //     ListNode* temp1=l1;  ListNode* temp2=l2; int sum=0;ListNode*head=NULL;ListNode*temp=NULL;
    //     while(temp1!=NULL&&temp2!=NULL){
    //         sum=(temp1->val)+(temp2->val)+carry;
    //         digit=sum%10;
    //         carry=sum/10;
    //        head= newll(digit,&head,&temp);
    //         temp1=temp1->next;
    //         temp2=temp2->next;
    //     }
    //     while(temp1!=NULL){
    //         sum=temp1->val+carry;
    //         digit = sum % 10;
    //         carry = sum / 10;
    //         newll(digit, &head, &temp);
    //         temp1 = temp1->next;
    //     }
    //     while(temp2!=NULL){
    //         sum=temp2->val+carry;
    //         digit = sum % 10;
    //         carry = sum / 10;
    //         newll(digit, &head, &temp);
    //         temp2= temp2->next;
    //     }
    //     if(carry!=0){
    //         newll(carry,&head,&temp);
    //     }

    //     return head;
    // }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        int carry=0;
        ListNode* dummynode=new ListNode(-1);
        ListNode* curr=dummynode;
        while(temp1!=NULL || temp2!=NULL){
            int sum=carry;
            if(temp1) sum+=temp1->val;
            if(temp2) sum+=temp2->val;
            ListNode* newnode=new ListNode(sum%10);
            carry=sum/10;

            curr->next=newnode;
            curr=curr->next;

            if(temp1) temp1=temp1->next;
            if(temp2) temp2=temp2->next;
        }

        if(carry){
            ListNode *newnode=new ListNode(carry);
            curr->next=newnode;
        }

        return dummynode->next;


    }
};