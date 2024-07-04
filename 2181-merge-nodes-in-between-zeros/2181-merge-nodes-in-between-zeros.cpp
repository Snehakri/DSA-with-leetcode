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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p=head->next;
        ListNode* temp=p;
        
        while(temp){
            int sum=0;
            while(temp && temp->val!=0){
                sum+=temp->val;
                temp=temp->next;
            }
            p->val=sum;
            temp=temp->next;
            p->next=temp;
            p=temp;
        }
        head=head->next;
        return head;
    }
};