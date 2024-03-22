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
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast){
            slow=slow->next;
        }
        slow=reverse_list(slow);
        fast=head;
        while(slow){
            if(fast->val!=slow->val) return false;
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
    ListNode* reverse_list(ListNode* p){
        
        // ListNode *p=head;
        ListNode *q,*r;
        r=NULL;
        while(p){
            q=p->next;
            p->next=r;
            r=p;
            p=q;
        }
        
        return r;
        
    }
};