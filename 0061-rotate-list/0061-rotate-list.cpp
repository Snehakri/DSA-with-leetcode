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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode* p=head;
        int count=1;
        while(p->next){
            count++;
            p=p->next;
        }
        p->next=head;
        if(k>count) k=k%count;
        for(int i=0;i<count-k;i++){
            p=p->next;
        }
        ListNode* q=p->next;
        p->next=NULL;
        return q;
    }
};