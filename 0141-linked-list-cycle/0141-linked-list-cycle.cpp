// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f) return true;

        }
        return false;
        
//         ListNode *r=head;
//         ListNode *b=head;
    
//         while(r!=NULL && run->next!=NULL){
//             back=back->next;
//             run=run->next->next;
//             if(run==back){
//                 return true;
//             }
//         }
//        return false;
    }
};