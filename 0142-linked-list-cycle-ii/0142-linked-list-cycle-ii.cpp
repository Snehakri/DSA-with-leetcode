/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        ListNode *s=head;
        ListNode *f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f){
                f=head;
                while(s!=f){
                    f=f->next;
                    s=s->next;
                }
                return f;
            }
        }
        // while(f){
        //     if(f==s){
        //         return f;
        //     }
        //     f=f->next;
        //     s=s->next;
        // }
        return NULL;
    }
};