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
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        vector<int> arr;int len=0;bool found=false;
        while(temp!=NULL){
            arr.push_back(temp->val);
            len++;
            temp=temp->next;
        }
        int i=len-1;temp=head;
        while(temp!=NULL&&i>=0){
            if(temp->val!=arr[i]){
                found= false;
                break;
            }
            found=true;
            temp=temp->next;
            i--;
        }
        return found;
    }
};