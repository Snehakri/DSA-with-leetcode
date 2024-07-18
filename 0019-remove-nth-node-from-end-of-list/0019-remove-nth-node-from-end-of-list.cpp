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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *p=head;
        while(p){
            count++;
            p=p->next;
        }
        count-=n;
        p=head;
         
        if(count==0) return head->next;
        ListNode *s=p;
        while(count>=0){
            if(count==0){
                s->next=p->next;
                p=p->next;
                break;
            }
            s=p;
            p=p->next;
            count--;
        }
        return head;
        
    }
};