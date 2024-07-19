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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1) return head;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* p=dummy,*s=dummy,*f=dummy;
        int count=0;
        while(s->next){
            count++;
            s=s->next;
        }
        while(count>=k){
            s=p->next;
            f=s->next;
            for(int i=1;i<k;i++){
                s->next=f->next;
                f->next=p->next;
                p->next=f;
                f=s->next;
            }
            p=s;
            count-=k;
        }
        return dummy->next;
        
    }
};