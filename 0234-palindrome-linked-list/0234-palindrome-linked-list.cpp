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
        if(!head || !head->next) return true;
        ListNode* s=head,*f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }
    
        ListNode *p=NULL;
        while(s){
            ListNode *temp=s->next;
            s->next=p;
            p=s;
            s=temp;
        }
        // while(p){
        //     cout<<p->val;
        //     p=p->next;
        // }
        // cout<<endl;
        // while(head){
        //     cout<<head->val<<" ";
        //     head=head->next;
        // }
        // p and head compare
        while(p && head){
            //cout<<p->val<<" and "<<head->val<<endl;
            if(p->val!=head->val){
                return false; 
            }
            p=p->next;
            head=head->next;
        }
        return true;
        // ListNode *slow=head;
        // ListNode *fast=head;
        // while(fast && fast->next){
        //     fast=fast->next->next;
        //     slow=slow->next;
        // }
        // if(fast){
        //     slow=slow->next;
        // }
        // slow=reverse_list(slow);
        // fast=head;
        // while(slow){
        //     if(fast->val!=slow->val) return false;
        //     fast=fast->next;
        //     slow=slow->next;
        // }
        // return true;
    }
//     ListNode* reverse_list(ListNode* p){
        
//         // ListNode *p=head;
//         ListNode *q,*r;
//         r=NULL;
//         while(p){
//             q=p->next;
//             p->next=r;
//             r=p;
//             p=q;
//         }
        
//         return r;
        
//     }
};