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
    // ListNode* reverse(ListNode *head){
    //     if(head==NULL) return head;
    //     ListNode *fast=head,*slow=NULL;
    //     while(fast){
    //         ListNode * temp=fast->next;
    //         fast->next=slow;
    //         slow=fast;
    //         fast=temp;
    //     }
    //     return slow;
    // }
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL) return head;
        ListNode *fast=head,*slow=NULL;
        while(fast){
            ListNode * temp=fast->next;
            fast->next=slow;
            slow=fast;
            fast=temp;
        }
        ListNode *newl=new ListNode(slow->val);
        int maxval=slow->val;
        slow=slow->next;
        while(slow!=NULL){
            if(slow->val>=maxval){
                maxval=slow->val;
                ListNode*temp=new ListNode(maxval);
                temp->next=newl;
                newl=temp;
            }
            slow=slow->next;
        }
        return newl;
    }
};