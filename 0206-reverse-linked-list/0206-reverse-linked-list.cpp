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
    ListNode* reverseList(ListNode* head) {
        // if(head==NULL) return head;
        // ListNode *p=head;
        // ListNode *s,*r;
        // s=NULL;
        // while(p->next){
        //     r=p->next;
        //     p->next=s;
        //     s=p;
        //     p=r;
        // }
        // p->next=s;
        // return p;
        ListNode *s=NULL;
        ListNode *p=head;
        while(p){
            ListNode *temp=p->next;
            p->next=s;
            s=p;
            p=temp;
        }
        return s;
    }
};