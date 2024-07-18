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
    ListNode* middleNode(ListNode* head) {
        // ListNode * top=head;
        // int count=0;
        // while(top!=NULL){
        //     top=top->next;
        //     count++;
        // }
        // int n=0;
        // if(count%2==0) n=(count+2)/2;
        // else n=(count+1)/2;
        // ListNode * ans=head;
        // for(int i=0;i<n-1;i++){
        //     ans=ans->next;
        // }
        // return ans;
        ListNode *s=head;
        ListNode *f=head;
        while(f->next && f->next->next){
            s=s->next;
            f=f->next->next;
        }
        if(f->next) s=s->next;
        return s;
    }
};